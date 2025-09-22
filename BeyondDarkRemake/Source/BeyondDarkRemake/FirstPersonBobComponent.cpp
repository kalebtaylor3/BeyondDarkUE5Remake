// FirstPersonBobComponent.cpp

#include "FirstPersonBobComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Curves/CurveFloat.h"

UFirstPersonBobComponent::UFirstPersonBobComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	// Tick after movement so we read final velocity, not the previous frame.
	PrimaryComponentTick.TickGroup = TG_PostUpdateWork;
}

void UFirstPersonBobComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerChar = Cast<ACharacter>(GetOwner());
	EnsureCamera();
	if (Camera)
	{
		DefaultRelLoc = Camera->GetRelativeLocation();
		DefaultRelRot = Camera->GetRelativeRotation();
	}
	// Make sure we tick after CharacterMovement specifically
	if (OwnerChar.IsValid())
	{
		if (auto* CM = OwnerChar->GetCharacterMovement())
		{
			AddTickPrerequisiteComponent(CM);
		}
	}
}

void UFirstPersonBobComponent::EnsureCamera()
{
	if (!Camera && OwnerChar.IsValid())
	{
		TArray<UCameraComponent*> Cams;
		OwnerChar->GetComponents<UCameraComponent>(Cams);
		if (Cams.Num()) Camera = Cams[0];
	}
}

void UFirstPersonBobComponent::TickComponent(float DT, ELevelTick, FActorComponentTickFunction*)
{
	if (!OwnerChar.IsValid() || !Camera) return;

	const UCharacterMovementComponent* CM = OwnerChar->GetCharacterMovement();
	const FVector Vel = CM ? CM->Velocity : FVector::ZeroVector;
	const bool bFalling = CM ? CM->IsFalling() : false;

	// ---- 0) Vectors & direction weights (unit contributions) ----
	const FVector Fwd = OwnerChar->GetActorForwardVector();
	const FVector Right = OwnerChar->GetActorRightVector();

	const float Speed2D = Vel.Size2D();
	const FVector2D Dir2D = (Speed2D > KINDA_SMALL_NUMBER)
		? FVector2D(FVector::DotProduct(Vel.GetSafeNormal2D(), Fwd), FVector::DotProduct(Vel.GetSafeNormal2D(), Right))
		: FVector2D::ZeroVector;

	// Unit weights for direction (L1 normalized)
	float wF = FMath::Clamp(Dir2D.X, 0.f, 1.f);   // forward
	float wB = FMath::Clamp(-Dir2D.X, 0.f, 1.f);  // backward
	float wS = FMath::Abs(Dir2D.Y);               // strafe magnitude

	float wSum = wF + wB + wS;
	if (wSum > KINDA_SMALL_NUMBER) { wF /= wSum; wB /= wSum; wS /= wSum; }
	else { wF = wB = wS = 0.f; }

	// For amplitude drivers we also want absolute forward/strafe speeds:
	const float ForwardVelAbs = FMath::Abs(FVector::DotProduct(Vel, Fwd));
	const float StrafeVelAbs = FMath::Abs(FVector::DotProduct(Vel, Right));

	// ---- 1) Smooth speed & decide idle/move ----
	SmoothedSpeed = FMath::FInterpTo(SmoothedSpeed, Speed2D, DT, SpeedSmoothing);

	float TargetAlpha = MoveAlpha;
	if (!bFalling && SmoothedSpeed > StartMoveSpeed)      TargetAlpha = 1.f;
	else if (bFalling || SmoothedSpeed < StopMoveSpeed)   TargetAlpha = 0.f;
	MoveAlpha = FMath::FInterpTo(MoveAlpha, TargetAlpha, DT, MoveAlphaInterp);

	// ---- 2) Sprint gate (for cadence & amplitude) ----
	const float Ref = FMath::Max(ReferenceSpeed, 1.f);
	const float SprintStart = SprintGateStartFraction * Ref;
	const float SprintFull = SprintGateFullFraction * Ref;
	const float SprintGate = FMath::GetMappedRangeValueClamped(
		FVector2D(SprintStart, SprintFull),
		FVector2D(0.f, 1.f),
		SmoothedSpeed
	);

	// ---- 3) Distance-driven base cadence, then direction multiplier ----
	constexpr float StrideLenWalkCm = 160.f;
	constexpr float StrideLenSprintCm = 180.f;
	const float StrideLen = FMath::Lerp(StrideLenWalkCm, StrideLenSprintCm, SprintGate);

	float TargetStepHz = (StrideLen > 1.f) ? (SmoothedSpeed / StrideLen) : 0.f;
	TargetStepHz = FMath::Clamp(TargetStepHz, 0.6f, 2.2f);

	static float SmoothedStepHz = 0.f;
	SmoothedStepHz = FMath::FInterpTo(SmoothedStepHz, TargetStepHz, DT, 8.f);

	// Direction-based cadence: forward fastest, strafe slower, back slowest
	const float StepHzDirScale =
		wF * ZMultForward +
		wS * ZMultStrafe +
		wB * ZMultBackward;

	float StepHz = SmoothedStepHz * FMath::Max(StepHzDirScale, 0.1f);
	StepHz *= FMath::Lerp(1.f, SprintFreqMultiplier, SprintGate);

	// Advance phases (idle is fixed)
	WalkPhase += DT * StepHz * 2.f * PI;
	IdlePhase += DT * IdleHz * 2.f * PI;

	// ---- 4) Amplitude drivers (curves or math) ----
	const float SpeedNormClamped = FMath::Clamp(SmoothedSpeed / Ref, 0.f, 1.f);
	const float ForwardNorm = FMath::Pow(FMath::Clamp(ForwardVelAbs / Ref, 0.f, 1.5f), SpeedAmpExponent);
	const float StrafeNorm = FMath::Pow(FMath::Clamp(StrafeVelAbs / Ref, 0.f, 1.5f), SpeedAmpExponent);

	const float SX = FMath::Lerp(1.f, SprintAmpX, SprintGate);
	const float SY = FMath::Lerp(1.f, SprintAmpY, SprintGate);
	const float SZ = FMath::Lerp(1.f, SprintAmpZ, SprintGate);

	const float AxFactor = AmpXBySpeed ? AmpXBySpeed->GetFloatValue(SpeedNormClamped)
		: (0.25f + 0.75f * ForwardNorm);
	const float AzFactor = AmpZBySpeed ? AmpZBySpeed->GetFloatValue(SpeedNormClamped)
		: (0.35f + 0.65f * FMath::Clamp(0.6f * ForwardNorm + 0.4f * StrafeNorm, 0.f, 1.f));
	const float AyFactor = AmpYByStrafe ? AmpYByStrafe->GetFloatValue(FMath::Clamp(StrafeNorm, 0.f, 1.f))
		: FMath::Lerp(StrafeSwayMinFactor, StrafeSwayMaxFactor, FMath::Clamp(StrafeNorm, 0.f, 1.f));

	const float AmpX = AxFactor * SX * WalkAmplitudeX * GlobalBobStrength;
	float       AmpZ = AzFactor * SZ * WalkAmplitudeZ * GlobalBobStrength;
	const float BaseStrafeSwayY = StrafeSwayBaseScale * WalkAmplitudeZ;
	const float AmpY = AyFactor * SY * BaseStrafeSwayY * GlobalBobStrength;

	// ---- 5) Directional + Crouch amplitude scalers ----
	const float wFB = wF + wB;

	// Directional vertical scaling (forward/back share the same scale)
	const float DirScaleZ = wFB * ZMultForward + wS * ZMultStrafe;

	// Optional directional scaling for X (torso sway)
	const float DirScaleX = bApplyDirMultToX
		? (wFB * XMultForward + wS * XMultStrafe)
		: 1.0f;

	// Crouch vertical scaling (CrouchAlpha: 0=stand, 1=crouched)
	const float CrouchAlphaClamped = FMath::Clamp(CrouchAlpha, 0.f, 1.f);
	const float CrouchScaleZ = FMath::Lerp(1.f, ZMultCrouch, CrouchAlphaClamped);

	// Final per-axis amplitudes
	const float AmpZFinal = AmpZ * DirScaleZ * CrouchScaleZ;
	const float AmpXFinal = AmpX * DirScaleX;
	const float AmpYFinal = AmpY * wS; // only sway when actually strafing

	// ---- 6) Wave sampling (curves override sins) ----
	const float Phase01 = FMath::Frac(WalkPhase / (2.f * PI));
	const float PhaseX01 = FMath::Frac(Phase01 + (PhaseXDeg / 360.f));
	const float PhaseY01 = FMath::Frac(Phase01 + (StrafeSwayPhaseDeg / 360.f));
	const float PhaseYRad = FMath::DegreesToRadians(StrafeSwayPhaseDeg);

	auto SampleWave = [](UCurveFloat* C, float P01, float Default)->float
		{
			return C ? C->GetFloatValue(P01) : Default; // Curves output ~[-1..1]
		};

	const float WaveZ = SampleWave(BobZWave, Phase01, FMath::Sin(WalkPhase));
	const float WaveX = SampleWave(BobXWave, PhaseX01, FMath::Sin(WalkPhase * 0.5f)); // slower torso sway
	const float WaveY = SampleWave(BobYSwayWave, PhaseY01, FMath::Sin(WalkPhase + PhaseYRad));

	const FVector WalkOffset(
		WaveX * AmpXFinal,
		WaveY * AmpYFinal,   // strafe-only lateral sway
		WaveZ * AmpZFinal
	);
	const FVector IdleOffset(0.f, 0.f, FMath::Sin(IdlePhase) * IdleAmplitudeZ);

	// ---- 7) Final low-pass (stabilize) & mix ----
	const FVector RawFinalOffset = FMath::Lerp(IdleOffset, WalkOffset, MoveAlpha);

	static FVector FinalOffsetLP = FVector::ZeroVector;
	const float OffsetSmoothing = 10.f;
	FinalOffsetLP = FMath::VInterpTo(FinalOffsetLP, RawFinalOffset, DT, OffsetSmoothing);

	// ==== 8) Lean (unchanged) ====
	const float LateralDeadzone = 10.f;
	const float LeanDeadzone = 0.05f;

	static float MoveGateAlpha = 0.f;
	float GateTarget = MoveGateAlpha;
	if (!bFalling && Speed2D > StartMoveSpeed) GateTarget = 1.f;
	else if (bFalling || Speed2D < StopMoveSpeed) GateTarget = 0.f;
	MoveGateAlpha = FMath::FInterpTo(MoveGateAlpha, GateTarget, DT, MoveAlphaInterp);

	if (MoveGateAlpha < 0.01f)
	{
		LeanValue = 0.f; ImpulseRoll = 0.f; ImpulseYaw = 0.f; ImpulseOffset = 0.f; PrevLateralVel = 0.f;
	}

	float LateralVel = CM ? FVector::DotProduct(Vel, Right) : 0.f;
	if (FMath::Abs(LateralVel) < LateralDeadzone) LateralVel = 0.f;

	float LateralNorm = 0.f;
	if (Ref > 1.f) LateralNorm = FMath::Clamp(LateralVel / Ref, -1.f, 1.f);
	if (MoveGateAlpha < 0.2f || FMath::Abs(LateralNorm) < LeanDeadzone) LateralNorm = 0.f;

	float TargetLean = 0.f;
	if (LateralNorm != 0.f)
	{
		if (LeanResponseCurve)
		{
			const float Mag = FMath::Abs(LateralNorm);
			TargetLean = FMath::Sign(LateralNorm) * FMath::Clamp(LeanResponseCurve->GetFloatValue(Mag), 0.f, 1.f);
		}
		else
		{
			const float Mag = FMath::Pow(FMath::Abs(LateralNorm), LeanExponent);
			TargetLean = FMath::Sign(LateralNorm) * Mag;
		}
	}
	const bool  bLeaningFurther = FMath::Abs(TargetLean) > FMath::Abs(LeanValue);
	const float LerpSpeed = bLeaningFurther ? LeanInSpeed : LeanOutSpeed;
	LeanValue = FMath::FInterpTo(LeanValue, TargetLean, DT, LerpSpeed);

	const float VelDelta = LateralVel - PrevLateralVel;
	const bool  bChangedSign = (PrevLateralVel * LateralVel < 0.f);
	const bool  bCanImpulse = (MoveGateAlpha > 0.5f) && (FMath::Abs(LateralVel) > LateralDeadzone);
	if (bCanImpulse && bChangedSign && FMath::Abs(VelDelta) > DirChangeVelThreshold)
	{
		const float ImpulseSign = -FMath::Sign(VelDelta);
		ImpulseRoll += ImpulseSign * ImpulseRollDeg;
		ImpulseYaw += ImpulseSign * ImpulseYawDeg;
		ImpulseOffset += ImpulseSign * ImpulseOffsetY;
	}
	PrevLateralVel = LateralVel;

	ImpulseRoll = FMath::FInterpTo(ImpulseRoll, 0.f, DT, ImpulseDamping);
	ImpulseYaw = FMath::FInterpTo(ImpulseYaw, 0.f, DT, ImpulseDamping);
	ImpulseOffset = FMath::FInterpTo(ImpulseOffset, 0.f, DT, ImpulseDamping);

	const float LeanRoll = (LeanValue * LeanMaxRollDeg + ImpulseRoll) * MoveGateAlpha;
	const float LeanYaw = (LeanValue * LeanMaxYawDeg + ImpulseYaw) * MoveGateAlpha;
	const float LeanShift = (LeanValue * LeanMaxOffsetY + ImpulseOffset) * MoveGateAlpha;

	// ---- APPLY ----
	FVector FinalOffsetWithLean = FinalOffsetLP;
	FinalOffsetWithLean.Y += LeanShift; // +Y = right

	FVector ExternalBase(0.f, 0.f, ExternalBaseOffsetZ);

	const float FinalRoll = FMath::FInterpTo(Camera->GetRelativeRotation().Roll, DefaultRelRot.Roll + LeanRoll, DT, RollInterpSpeed);
	const float FinalYaw = DefaultRelRot.Yaw + LeanYaw;
	const float FinalPitch = DefaultRelRot.Pitch;

	Camera->SetRelativeLocationAndRotation(DefaultRelLoc + FinalOffsetWithLean, FRotator(FinalPitch, FinalYaw, FinalRoll));

	// Footsteps (unchanged)
	const float WalkSin = FMath::Sin(WalkPhase);
	const float NormSin = (WalkSin + 1.f) * 0.5f;
	if (MoveAlpha > 0.75f)
	{
		if (PrevStepSin < 0.95f && NormSin >= 0.95f) { OnFootstep.Broadcast(); }
		PrevStepSin = NormSin;
	}
	else { PrevStepSin = 0.f; }
}
