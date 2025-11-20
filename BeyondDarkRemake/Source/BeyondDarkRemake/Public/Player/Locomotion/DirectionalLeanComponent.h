#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DirectionalLeanComponent.generated.h"

class UDirectionalLeanCameraModifier;

UCLASS(ClassGroup = (Camera), meta = (BlueprintSpawnableComponent))
class UDirectionalLeanComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UDirectionalLeanComponent();

	// Reference speed (cm/s) for normalization
	UPROPERTY(EditAnywhere, Category = "Lean|Tuning", meta = (ClampMin = "1.0"))
	float ReferenceSpeed = 300.f;

	// Idle gating with hysteresis
	UPROPERTY(EditAnywhere, Category = "Lean|Tuning")
	float StartMoveSpeed = 60.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Tuning")
	float StopMoveSpeed = 40.f;

	// ---- Strafe (roll) ----
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeStartThreshold = 80.f;     // cm/s to trigger start impulse
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeSustainRollDeg = 9.f;      // sustained roll at full strafe
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeStartRollImpulseDeg = 5.f; // quick kick when you flip/start
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeSustainInSpeed = 12.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeSustainOutSpeed = 10.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe")
	float StrafeImpulseDamping = 9.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Strafe", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float StrafeExponent = 1.2f;

	// ---- Backward (pitch) ----
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackStartThreshold = 80.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackSustainPitchDownDeg = 4.f;    // down is negative pitch
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackStartPitchDownImpulseDeg = 2.5f;
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackSustainInSpeed = 10.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackSustainOutSpeed = 9.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Back")
	float BackImpulseDamping = 9.f;
	UPROPERTY(EditAnywhere, Category = "Lean|Back", meta = (ClampMin = "0.5", ClampMax = "3.0"))
	float BackExponent = 1.2f;

	// How much the movement must be "sideways" before roll engages
	UPROPERTY(EditAnywhere, Category = "Lean|StrafeGate", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StrafeDominanceStart = 0.70f; // need 70% sideways to start

	UPROPERTY(EditAnywhere, Category = "Lean|StrafeGate", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StrafeDominanceStop = 0.55f; // fall back below 55%

	UPROPERTY(EditAnywhere, Category = "Lean|StrafeGate", meta = (ClampMin = "1.0"))
	float StrafeDominanceInterp = 12.f; // smoothing for the gate

	// Ignore tiny lateral speeds entirely
	UPROPERTY(EditAnywhere, Category = "Lean|StrafeGate", meta = (ClampMin = "0.0"))
	float StrafeMinSpeed = 80.f; // cm/s

	// Master enables
	UPROPERTY(EditAnywhere, Category = "Lean|Axes")
	bool bAffectRoll = true;
	UPROPERTY(EditAnywhere, Category = "Lean|Axes")
	bool bAffectPitch = true;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick, FActorComponentTickFunction*) override;

private:
	// We inject this into the PlayerCameraManager so we can add roll/pitch AFTER control rotation.
	UPROPERTY(Transient)
	UDirectionalLeanCameraModifier* Mod = nullptr;

	// Gate & state
	float MoveGateAlpha = 0.f;
	float SustainRoll = 0.f;
	float SustainPitch = 0.f;
	float ImpRoll = 0.f;
	float ImpPitch = 0.f;
	float PrevLateralVel = 0.f;
	float PrevForwardVel = 0.f;

	float StrafeGateAlpha = 0.f; // 0..1 hysteresis gate for "clearly strafing"


	void EnsureModifier();
};
