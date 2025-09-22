#include "DirectionalLeanComponent.h"
#include "DirectionalLeanCameraModifier.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"

UDirectionalLeanComponent::UDirectionalLeanComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PostUpdateWork; // run late
}

void UDirectionalLeanComponent::BeginPlay()
{
	Super::BeginPlay();
	EnsureModifier();

	// Order: Movement -> Bob -> LookSway -> Lean (this)
	if (AActor* Owner = GetOwner())
	{
		if (const ACharacter* Char = Cast<ACharacter>(Owner))
		{
			if (UCharacterMovementComponent* CM = Char->GetCharacterMovement())
			{
				AddTickPrerequisiteComponent(CM);
			}
		}
		for (UActorComponent* C : Owner->GetComponents())
		{
			const FString N = C->GetClass()->GetName();
			if (N.Contains(TEXT("FirstPersonBobComponent")) || N.Contains(TEXT("LookSwayComponent")))
			{
				AddTickPrerequisiteComponent(C);
			}
		}
	}
}

void UDirectionalLeanComponent::EnsureModifier()
{
	if (Mod) return;

	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		if (APlayerController* PC = Cast<APlayerController>(Char->GetController()))
		{
			if (APlayerCameraManager* PCM = PC->PlayerCameraManager)
			{
				Mod = Cast<UDirectionalLeanCameraModifier>(
					PCM->AddNewCameraModifier(UDirectionalLeanCameraModifier::StaticClass()));
			}
		}
	}
}

void UDirectionalLeanComponent::TickComponent(float DT, ELevelTick, FActorComponentTickFunction*)
{
	if (!Mod) { EnsureModifier(); if (!Mod) return; }

	ACharacter* Char = Cast<ACharacter>(GetOwner());
	const UCharacterMovementComponent* CM = Char ? Char->GetCharacterMovement() : nullptr;

	const FVector Vel = CM ? CM->Velocity : FVector::ZeroVector;
	const float Speed2D = Vel.Size2D();

	const FVector Fwd = Char ? Char->GetActorForwardVector() : FVector::ForwardVector;
	const FVector Right = Char ? Char->GetActorRightVector() : FVector::RightVector;

	const float LateralVel = FVector::DotProduct(Vel, Right);   // +right / -left
	const float ForwardVel = FVector::DotProduct(Vel, Fwd);     // +forward / -back

	// Gate with hysteresis
	float GateTarget = MoveGateAlpha;
	if (Speed2D > StartMoveSpeed)      GateTarget = 1.f;
	else if (Speed2D < StopMoveSpeed)  GateTarget = 0.f;
	MoveGateAlpha = FMath::FInterpTo(MoveGateAlpha, GateTarget, DT, 10.f);

	const float Ref = FMath::Max(ReferenceSpeed, 1.f);
	const float LatNorm = FMath::Clamp(FMath::Abs(LateralVel) / Ref, 0.f, 1.f);
	const float BackNorm = FMath::Clamp(FMath::Abs(FMath::Min(ForwardVel, 0.f)) / Ref, 0.f, 1.f);

	// ==== STRAFE ? ROLL (dominance-gated) ====
	{
		// 1) Compute lateral dominance: how "sideways" is our motion?
		const float fAbs = FMath::Abs(ForwardVel);
		const float lAbs = FMath::Abs(LateralVel);
		const float denom = (fAbs + lAbs + 1.f); // avoid div-by-zero; +1 keeps ratio tame near zero speed
		const float Dominance = lAbs / denom;    // 0 = purely forward, 1 = purely strafe

		// 2) Hysteresis gate: only "open" when we're clearly strafing
		float TargetGate = StrafeGateAlpha;
		const bool EnoughLatSpeed = lAbs > StrafeMinSpeed;

		if (Dominance > StrafeDominanceStart && EnoughLatSpeed)
			TargetGate = 1.f;
		else if (Dominance < StrafeDominanceStop || !EnoughLatSpeed)
			TargetGate = 0.f;

		StrafeGateAlpha = FMath::FInterpTo(StrafeGateAlpha, TargetGate, DT, StrafeDominanceInterp);

		// 3) Impulse only if we're truly strafing AND changed sign
		const bool bChangedSign = (PrevLateralVel * LateralVel) < 0.f;

		if (bAffectRoll && MoveGateAlpha > 0.25f && StrafeGateAlpha > 0.5f && bChangedSign)
		{
			const float s = FMath::Sign(LateralVel); // tilt into travel direction
			ImpRoll += s * StrafeStartRollImpulseDeg;
		}

		// 4) Sustained roll target (nonlinear), scaled by gate so diagonals don’t trigger
		if (bAffectRoll)
		{
			const float sgn = (LateralVel >= 0.f) ? 1.f : -1.f;
			const float LatNorm2 = FMath::Clamp(lAbs / FMath::Max(ReferenceSpeed, 1.f), 0.f, 1.f);
			const float shaped = FMath::Pow(LatNorm2, StrafeExponent);

			const float TargetRoll =
				(MoveGateAlpha > 0.05f ? StrafeGateAlpha : 0.f) * (sgn * StrafeSustainRollDeg * shaped);

			const bool bLeaningMore = FMath::Abs(TargetRoll) > FMath::Abs(SustainRoll);
			const float Speed = bLeaningMore ? StrafeSustainInSpeed : StrafeSustainOutSpeed;
			SustainRoll = FMath::FInterpTo(SustainRoll, TargetRoll, DT, Speed);

			// Dampen impulse
			ImpRoll = FMath::FInterpTo(ImpRoll, 0.f, DT, StrafeImpulseDamping);
		}
	}


	// === BACKWARD ? PITCH DOWN ===
	if (bAffectPitch)
	{
		const bool bPastBack = (-ForwardVel) > BackStartThreshold;
		const bool bBackNow = (ForwardVel < 0.f);
		const bool bWasBack = (PrevForwardVel < 0.f);
		const bool bEnterBack = bBackNow && !bWasBack && bPastBack;

		if (MoveGateAlpha > 0.25f && bEnterBack)
		{
			ImpPitch += -BackStartPitchDownImpulseDeg; // negative = look down
		}

		const float shaped = FMath::Pow(BackNorm, BackExponent);
		const float Target = (MoveGateAlpha > 0.05f && bBackNow) ? (-BackSustainPitchDownDeg * shaped) : 0.f;

		const bool bMore = FMath::Abs(Target) > FMath::Abs(SustainPitch);
		const float Spd = bMore ? BackSustainInSpeed : BackSustainOutSpeed;
		SustainPitch = FMath::FInterpTo(SustainPitch, Target, DT, Spd);

		ImpPitch = FMath::FInterpTo(ImpPitch, 0.f, DT, BackImpulseDamping);
	}

	PrevLateralVel = LateralVel;
	PrevForwardVel = ForwardVel;

	// === WRITE TO CAMERA MODIFIER (FINAL VIEW) ===
	const float AddRoll = bAffectRoll ? (SustainRoll + ImpRoll) : 0.f;
	const float AddPitch = bAffectPitch ? (SustainPitch + ImpPitch) : 0.f;
	Mod->AddRot = FRotator(AddPitch, 0.f, AddRoll);
}
