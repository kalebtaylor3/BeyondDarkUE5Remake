// FirstPersonBobComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FirstPersonBobComponent.generated.h"

class UCameraComponent;
class ACharacter;
class UCurveFloat;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFootstep);

UCLASS(ClassGroup = (Camera), meta = (BlueprintSpawnableComponent))
class UFirstPersonBobComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFirstPersonBobComponent();

	// Refs
	UPROPERTY(EditAnywhere, Category = "Refs") UCameraComponent* Camera = nullptr;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float ZMultForward = 1.00f;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float ZMultStrafe = 0.85f;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float ZMultBackward = 0.70f;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (ClampMin = "0.0"))
	float ZMultCrouch = 3.0f; // 0.75–0.85 usually feels right

	// 0 = fully standing, 1 = fully crouched (set by character each tick)
	UPROPERTY(BlueprintReadWrite, Category = "Bob|External")
	float CrouchAlpha = 0.f;

	// (Optional) also scale fore/aft torso sway by direction, off by default
	UPROPERTY(EditAnywhere, Category = "Bob|DirMult")
	bool bApplyDirMultToX = false;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (EditCondition = "bApplyDirMultToX", ClampMin = "0.0", ClampMax = "2.0"))
	float XMultForward = 1.00f;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (EditCondition = "bApplyDirMultToX", ClampMin = "0.0"))
	float XMultStrafe = 0.90f;

	UPROPERTY(EditAnywhere, Category = "Bob|DirMult", meta = (EditCondition = "bApplyDirMultToX", ClampMin = "0.0"))
	float XMultBackward = 0.80f;

	// Amplitudes (cm)
	UPROPERTY(EditAnywhere, Category = "Bob|Walk") float WalkAmplitudeZ = 2.0f;
	UPROPERTY(EditAnywhere, Category = "Bob|Walk") float WalkAmplitudeX = 0.75f;
	UPROPERTY(EditAnywhere, Category = "Bob|Idle") float IdleAmplitudeZ = 0.35f;

	// Frequencies (steps/sec). Walk freq scales with speed; idle is fixed.
	UPROPERTY(EditAnywhere, Category = "Bob|Walk") float MinWalkHz = 1.5f;
	UPROPERTY(EditAnywhere, Category = "Bob|Walk") float MaxWalkHz = 2.2f;
	UPROPERTY(EditAnywhere, Category = "Bob|Idle") float IdleHz = 0.30f;

	// Movement/bob tuning
	UPROPERTY(EditAnywhere, Category = "Bob|Tuning") float ReferenceSpeed = 300.f; // cm/s for MaxWalkHz
	UPROPERTY(EditAnywhere, Category = "Bob|Tuning") float SpeedSmoothing = 10.f;  // low-pass speed
	UPROPERTY(EditAnywhere, Category = "Bob|Tuning") float MoveAlphaInterp = 10.f; // crossfade speed

	// Hysteresis to decide moving vs idle (in cm/s)
	UPROPERTY(EditAnywhere, Category = "Bob|Tuning") float StartMoveSpeed = 60.f;
	UPROPERTY(EditAnywhere, Category = "Bob|Tuning") float StopMoveSpeed = 40.f;

	// Simple roll blend for visual weight
	UPROPERTY(EditAnywhere, Category = "Sway") float StrafeRollDegrees = 0.45f;
	UPROPERTY(EditAnywhere, Category = "Sway") float RollInterpSpeed = 8.f;

	// ===== Lean (strafing weight) =====
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanMaxRollDeg = 4.0f;
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanMaxYawDeg = 1.5f;
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanMaxOffsetY = 3.5f; // cm
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanExponent = 1.35f;
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanInSpeed = 12.f;
	UPROPERTY(EditAnywhere, Category = "Lean") float LeanOutSpeed = 16.f;

	// Extra base Z offset other systems can drive (e.g., crouch)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bob|External")
	float ExternalBaseOffsetZ = 0.f;


	// Direction-change “whip” impulse
	UPROPERTY(EditAnywhere, Category = "Lean|Impulse") float DirChangeVelThreshold = 120.f;  // cm/s
	UPROPERTY(EditAnywhere, Category = "Lean|Impulse") float ImpulseRollDeg = 2.25f;
	UPROPERTY(EditAnywhere, Category = "Lean|Impulse") float ImpulseYawDeg = 0.8f;
	UPROPERTY(EditAnywhere, Category = "Lean|Impulse") float ImpulseOffsetY = 1.5f;   // cm
	UPROPERTY(EditAnywhere, Category = "Lean|Impulse") float ImpulseDamping = 8.f;

	// Optional curve to shape lean response (X = |lateralNorm| 0..1, Y = 0..1)
	UPROPERTY(EditAnywhere, Category = "Lean") UCurveFloat* LeanResponseCurve = nullptr;

	// Step events only when actually “walking”
	UPROPERTY(BlueprintAssignable, Category = "Bob|Events") FOnFootstep OnFootstep;

	// --- Bob speed response (how amplitudes grow with speed) ---
	UPROPERTY(EditAnywhere, Category = "Bob|SpeedResponse", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float SpeedAmpExponent = 1.2f;   // >1 = small motion does less, fast motion pops

	// Forward vs. strafe contribution to step rate (0=strfe-only, 1=forward-only)
	UPROPERTY(EditAnywhere, Category = "Bob|SpeedResponse", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float ForwardBiasInStride = 0.65f;

	// --- Sprint controls ---
	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.1"))
	float SprintGateStartFraction = 0.75f;   // × ReferenceSpeed where sprint boost starts

	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.1"))
	float SprintGateFullFraction = 1.15f;   // × ReferenceSpeed where sprint boost is max

	// Multiplies the cadence during sprint (subtle goes a long way)
	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.5", ClampMax = "2.0"))
	float SprintFreqMultiplier = 1.10f;

	// Amplitude multipliers near full sprint (per-axis)
	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float SprintAmpX = 1.20f;
	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float SprintAmpY = 1.25f;
	UPROPERTY(EditAnywhere, Category = "Bob|Sprint", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float SprintAmpZ = 1.35f;

	// --- Strafe sway controls (side-to-side bob separate from lean) ---
	UPROPERTY(EditAnywhere, Category = "Bob|Strafe", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float StrafeSwayBaseScale = 0.60f;  // BaseStrafeSwayY = WalkAmplitudeZ * this

	// Map StrafeNorm (0..1) -> sway factor in [Min..Max]
	UPROPERTY(EditAnywhere, Category = "Bob|Strafe", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StrafeSwayMinFactor = 0.20f;
	UPROPERTY(EditAnywhere, Category = "Bob|Strafe", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float StrafeSwayMaxFactor = 1.00f;

	// Phase offset for Y sway (deg) relative to vertical bob
	UPROPERTY(EditAnywhere, Category = "Bob|Strafe", meta = (ClampMin = "-180.0", ClampMax = "180.0"))
	float StrafeSwayPhaseDeg = 90.f;

	// ===== Curve-shaped bob waves (0..1 phase -> approximately -1..1) =====
	// If null, we fall back to sine defaults.
	UPROPERTY(EditAnywhere, Category = "Bob|Wave") UCurveFloat* BobZWave = nullptr; // vertical
	UPROPERTY(EditAnywhere, Category = "Bob|Wave") UCurveFloat* BobXWave = nullptr; // fore/aft
	UPROPERTY(EditAnywhere, Category = "Bob|Wave") UCurveFloat* BobYSwayWave = nullptr; // lateral sway

	// Additional phase control for X (Y uses StrafeSwayPhaseDeg)
	UPROPERTY(EditAnywhere, Category = "Bob|Wave", meta = (ClampMin = "-180.0", ClampMax = "180.0"))
	float PhaseXDeg = 0.f;

	// ===== Amplitude vs speed curves =====
	// speedNorm = SmoothedSpeed / ReferenceSpeed (0..1). If null, math fallback is used.
	UPROPERTY(EditAnywhere, Category = "Bob|Amplitude") UCurveFloat* AmpZBySpeed = nullptr;
	UPROPERTY(EditAnywhere, Category = "Bob|Amplitude") UCurveFloat* AmpXBySpeed = nullptr;
	UPROPERTY(EditAnywhere, Category = "Bob|Amplitude") UCurveFloat* AmpYByStrafe = nullptr;

	// Quick global scaler after curves
	UPROPERTY(EditAnywhere, Category = "Bob|Amplitude", meta = (ClampMin = "0.0", ClampMax = "3.0"))
	float GlobalBobStrength = 1.0f;

	// ===== Optional step "kick" impulse on footfalls =====
	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse")
	bool bEnableStepImpulse = true;

	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float StepKickZ = 0.6f;                  // Z impulse per step

	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse", meta = (ClampMin = "0.0", ClampMax = "30.0"))
	float StepKickDamping = 12.f;            // fade rate of kick

	// Two footfalls per cycle; tweak where in the 0..1 phase they land
	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StepPhaseA = 0.05f;
	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StepPhaseB = 0.55f;

	// How strongly speed affects the kick (0 = constant, 1 = scales with speedNorm)
	UPROPERTY(EditAnywhere, Category = "Bob|StepImpulse", meta = (ClampMin = "0.0", ClampMax = "2.0"))
	float StepKickSpeedScale = 1.0f;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DT, ELevelTick, FActorComponentTickFunction*) override;

private:
	TWeakObjectPtr<ACharacter> OwnerChar;
	FVector  DefaultRelLoc;
	FRotator DefaultRelRot;

	float WalkPhase = 0.f;
	float IdlePhase = 0.f;
	float SmoothedSpeed = 0.f;   // low-pass speed
	float MoveAlpha = 0.f;   // 0=idle, 1=walk (smoothed crossfade)
	float PrevStepSin = 0.f;   // for peak detection
	float SmoothedStrafe = 0.f;  // reserved

	// Lean state
	float PrevLateralVel = 0.f;
	float LeanValue = 0.f;           // signed [-1..1] target-following value
	float ImpulseRoll = 0.f;
	float ImpulseYaw = 0.f;
	float ImpulseOffset = 0.f;

	// Step impulse state
	float StepVelZ = 0.f;
	float PrevPhase01 = 0.f;

	void EnsureCamera();
};
