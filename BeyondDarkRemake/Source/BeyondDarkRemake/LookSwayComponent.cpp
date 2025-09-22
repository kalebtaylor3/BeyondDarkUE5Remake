#include "LookSwayComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "FirstPersonBobComponent.h"

ULookSwayComponent::ULookSwayComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickGroup = TG_PostUpdateWork; // after movement
}

void ULookSwayComponent::BeginPlay()
{
	Super::BeginPlay();
	EnsureRefs();

	if (Camera)
	{
		DefaultRelLoc = Camera->GetRelativeLocation();
		DefaultRelRot = Camera->GetRelativeRotation();
	}

	// Choose slight random noise freqs for a natural handheld feel
	NHzRoll = FMath::FRandRange(NoiseHzLow, NoiseHzHigh);
	NHzOff = FMath::FRandRange(NoiseHzLow, NoiseHzHigh);

	// Ensure we tick AFTER the bob so we can add on top
	ChainAfterBob();
}

void ULookSwayComponent::EnsureRefs()
{
	if (!Camera)
	{
		if (const AActor* Owner = GetOwner())
		{
			TArray<UCameraComponent*> Cams;
			Owner->GetComponents(Cams);
			if (Cams.Num()) Camera = Cams[0];
		}
	}
}

void ULookSwayComponent::ChainAfterBob()
{
	if (AActor* Owner = GetOwner())
	{
		TArray<UFirstPersonBobComponent*> Bobs;
		Owner->GetComponents(Bobs);
		if (Bobs.Num())
		{
			// Make our tick wait for bob to finish its write
			AddTickPrerequisiteComponent(Bobs[0]);
		}
	}
}

void ULookSwayComponent::AddLookInput(const FVector2D& LookDelta)
{
	LookInput = LookDelta; // raw Enhanced Input value this frame
}

void ULookSwayComponent::TickComponent(float DT, ELevelTick, FActorComponentTickFunction*)
{
	if (!Camera) return;

	// ---- Owner / controller ----
	ACharacter* Char = Cast<ACharacter>(GetOwner());
	APlayerController* PC = Char ? Cast<APlayerController>(Char->GetController()) : nullptr;

	// ---- 1) Measure look motion (deg/sec), or fall back to input ----
	float YawRateDeg = 0.f;   // + right
	float PitchRateDeg = 0.f; // + up

	if (bUseControlRotationDelta && PC)
	{
		const FRotator Cur = PC->GetControlRotation();
		if (bPrevRotValid)
		{
			const float dYaw = FMath::FindDeltaAngleDegrees(PrevControlRot.Yaw, Cur.Yaw);
			const float dPitch = FMath::FindDeltaAngleDegrees(PrevControlRot.Pitch, Cur.Pitch);
			const float InvDT = 1.f / FMath::Max(DT, KINDA_SMALL_NUMBER);

			YawRateDeg = FMath::Clamp(dYaw * InvDT, -MaxLookRateClamp, MaxLookRateClamp);
			PitchRateDeg = FMath::Clamp(dPitch * InvDT, -MaxLookRateClamp, MaxLookRateClamp);
		}
		PrevControlRot = Cur;
		bPrevRotValid = true;
	}

	// Fallback (first frame, or if control rotation not available)
	if (!bUseControlRotationDelta || !bPrevRotValid)
	{
		YawRateDeg = FMath::Clamp(LookInput.X * RefLookRateDegPerSec, -MaxLookRateClamp, MaxLookRateClamp);
		PitchRateDeg = FMath::Clamp(LookInput.Y * RefLookRateDegPerSec, -MaxLookRateClamp, MaxLookRateClamp);
	}

	// ---- 2) Normalize & shape to [-1..1] (boosted for drama) ----
	auto NormSigned = [&](float Rate)->float
		{
			const float n = FMath::Clamp(Rate / RefLookRateDegPerSec, -1.f, 1.f);
			// Push harder toward extremes: exponent + extra gain, then clamp
			const float mag = FMath::Pow(FMath::Abs(n), RateExponent);
			return FMath::Clamp(FMath::Sign(n) * mag * 1.5f, -1.f, 1.f); // 50% stronger
		};

	const float NX = NormSigned(YawRateDeg);
	const float NY = NormSigned(PitchRateDeg);

	// Amplitude boost (so you don't have to change your UPROPERTYs)
	const float AmpRoll = MaxRollDeg * 1.6f; // ? bigger roll
	const float AmpYaw = MaxYawDeg * 1.8f; // ? more yaw lead
	const float AmpPitch = MaxPitchDeg * 1.4f;
	const float AmpOffY = MaxOffsetY * 1.8f;

	// Targets (independent of DPI/sensitivity)
	TargetRoll = FMath::Clamp(NX * AmpRoll, -AmpRoll, AmpRoll);
	TargetYaw = FMath::Clamp(NX * AmpYaw, -AmpYaw, AmpYaw);
	TargetPitch = FMath::Clamp(-NY * AmpPitch, -AmpPitch, AmpPitch);
	TargetOffsetY = FMath::Clamp(NX * AmpOffY, -AmpOffY, AmpOffY);

	// ---- 3) Gates: look activity + movement (prevents idle drift) ----
	const float StartLookRate = 30.f;   // kick in sooner
	const float FullLookRate = 160.f;  // full strength sooner
	const float RateAbs = FMath::Max(FMath::Abs(YawRateDeg), FMath::Abs(PitchRateDeg));

	float TargetLookGate = FMath::GetMappedRangeValueClamped(
		FVector2D(StartLookRate, FullLookRate),
		FVector2D(0.f, 1.f),
		RateAbs
	);
	static float LookGateAlpha = 0.f;
	LookGateAlpha = FMath::FInterpTo(LookGateAlpha, TargetLookGate, DT, 6.f); // slower = heavier

	static float MoveGate = 0.f;
	const float StartMoveSpeed = 60.f; // cm/s
	const float StopMoveSpeed = 40.f; // cm/s
	float Speed2D = Char ? Char->GetVelocity().Size2D() : 0.f;
	float TargetGate = MoveGate;
	if (Speed2D > StartMoveSpeed)      TargetGate = 1.f;
	else if (Speed2D < StopMoveSpeed)  TargetGate = 0.f;
	MoveGate = FMath::FInterpTo(MoveGate, TargetGate, DT, 5.f);

	const float CombinedGate = FMath::Max(LookGateAlpha, MoveGate);

	// ---- 4) Flick impulse on reversals + velocity injection for extra whip ----
	const float PrevYawRate = PrevLookX; // reuse storage
	const bool  bFlip = (FMath::Sign(PrevYawRate) != FMath::Sign(YawRateDeg));
	const float DeltaRate = YawRateDeg - PrevYawRate;

	const float FlickThreshDeg = (FlickThreshold <= 10.f)
		? FlickThreshold * RefLookRateDegPerSec
		: FlickThreshold;

	// function-static “velocities” for spring states (no header change)
	static float RollVel = 0.f, YawVel = 0.f, PitchVel = 0.f, OffYVel = 0.f;

	if (LookGateAlpha > 0.2f && bFlip && FMath::Abs(DeltaRate) > FlickThreshDeg)
	{
		const float s = -FMath::Sign(DeltaRate); // resist new direction
		ImpRoll += s * (ImpulseRollDeg * 1.4f);
		ImpYaw += s * (ImpulseYawDeg * 1.4f);

		// ?? inject velocity into the springs for a pronounced whip
		RollVel += s * 120.f;   // deg/s into roll spring
		YawVel += s * 70.f;    // deg/s into yaw spring
		OffYVel += s * 28.f;    // cm/s into offset spring
	}
	PrevLookX = YawRateDeg;

	if (CombinedGate < 0.02f) { ImpYaw = 0.f; ImpRoll = 0.f; }

	// ---- 5) Spring–damper (low freq + low damping = heavy, overshooty) ----
	auto SpringStep = [&](float Current, float Target, float& Vel, float FreqHzIn, float FreqHzOut, float Damping)
		{
			const bool bGoingToward = FMath::Abs(Target) > FMath::Abs(Current);
			const float FreqHz = bGoingToward ? FreqHzIn : FreqHzOut;
			const float w = 2.f * PI * FreqHz; // natural angular freq
			float x = Current;
			float v = Vel;
			const float a = w * w * (Target - x) - 2.f * Damping * w * v;
			v += a * DT;
			x += v * DT;
			Vel = v;
			return x;
		};

	// Heavier feel: lower in/out freq + lower damping
	const float D = 0.58f; // 0.5–0.65 = dramatic overshoot, 0.7 calmer
	const float RollIn = 1.2f, RollOut = 1.8f;
	const float YawIn = 1.1f, YawOut = 1.7f;
	const float PitIn = 1.0f, PitOut = 1.5f;
	const float OffIn = 0.9f, OffOut = 1.4f;

	// Gate targets so they settle to zero when idle
	const float TRoll = TargetRoll * CombinedGate;
	const float TYaw = TargetYaw * CombinedGate;
	const float TPitch = TargetPitch * CombinedGate;
	const float TOffY = TargetOffsetY * CombinedGate;

	CurRoll = SpringStep(CurRoll, TRoll, RollVel, RollIn, RollOut, D);
	CurYaw = SpringStep(CurYaw, TYaw, YawVel, YawIn, YawOut, D);
	CurPitch = SpringStep(CurPitch, TPitch, PitchVel, PitIn, PitOut, D);
	CurOffsetY = SpringStep(CurOffsetY, TOffY, OffYVel, OffIn, OffOut, D);

	// ---- 6) Dampen impulses ----
	ImpRoll = FMath::FInterpTo(ImpRoll, 0.f, DT, ImpulseDamping);
	ImpYaw = FMath::FInterpTo(ImpYaw, 0.f, DT, ImpulseDamping);

	// ---- 7) Optional handheld noise (only when "active") ----
	float NR = 0.f, NOY = 0.f;
	if (bEnableNoise)
	{
		NTime += DT;
		NR = (NoiseRollDeg * FMath::Sin(NTime * NHzRoll * 2.f * PI)) * CombinedGate;
		NOY = (NoiseOffsetY * FMath::Sin(NTime * NHzOff * 2.f * PI + 1.37f)) * CombinedGate;
	}

	// ---- 8) Apply on top of whatever bob wrote this frame ----
	const FVector  BaseLoc = Camera->GetRelativeLocation();
	const FRotator BaseRot = Camera->GetRelativeRotation();

	const float FinalRoll = BaseRot.Roll + CurRoll + ImpRoll + NR;
	const float FinalYaw = BaseRot.Yaw + CurYaw + ImpYaw;
	const float FinalPitch = BaseRot.Pitch + CurPitch;

	FVector FinalLoc = BaseLoc;
	FinalLoc.Y += (CurOffsetY + NOY); // +Y = right

	Camera->SetRelativeLocationAndRotation(FinalLoc, FRotator(FinalPitch, FinalYaw, FinalRoll));
}



