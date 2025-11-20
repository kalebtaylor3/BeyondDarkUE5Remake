#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LookSwayComponent.generated.h"

class UCameraComponent;
class UFirstPersonBobComponent;

UCLASS(ClassGroup = (Camera), meta = (BlueprintSpawnableComponent))
class ULookSwayComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	ULookSwayComponent();

	// References (auto-found in BeginPlay if not set)
	UPROPERTY(EditAnywhere, Category = "Refs") UCameraComponent* Camera = nullptr;

	// === Magnitudes ===
	UPROPERTY(EditAnywhere, Category = "Sway") float MaxRollDeg = 5.0f;   // tilt when moving mouse X
	UPROPERTY(EditAnywhere, Category = "Sway") float MaxYawDeg = 1.8f;  // slight yaw lead/lag
	UPROPERTY(EditAnywhere, Category = "Sway") float MaxPitchDeg = 1.2f;  // tiny pitch from mouse Y
	UPROPERTY(EditAnywhere, Category = "Sway") float MaxOffsetY = 3.0f;  // cm sideways head shift

	// Input?sway scales (per unit LookAction value)
	UPROPERTY(EditAnywhere, Category = "Sway") float RollPerLookX = 0.7f;
	UPROPERTY(EditAnywhere, Category = "Sway") float YawPerLookX = 0.35f;
	UPROPERTY(EditAnywhere, Category = "Sway") float PitchPerLookY = 0.35f;
	UPROPERTY(EditAnywhere, Category = "Sway") float OffsetYPerLookX = 1.5f;

	// Inertia
	UPROPERTY(EditAnywhere, Category = "Sway") float InSpeed = 14.f;  // lean in
	UPROPERTY(EditAnywhere, Category = "Sway") float OutSpeed = 16.f;  // recover

	// Optional micro handheld noise
	UPROPERTY(EditAnywhere, Category = "Noise") bool  bEnableNoise = true;
	UPROPERTY(EditAnywhere, Category = "Noise") float NoiseRollDeg = 0.35f;
	UPROPERTY(EditAnywhere, Category = "Noise") float NoiseOffsetY = 0.25f; // cm
	UPROPERTY(EditAnywhere, Category = "Noise") float NoiseHzLow = 0.7f;
	UPROPERTY(EditAnywhere, Category = "Noise") float NoiseHzHigh = 1.3f;

	// Direction-change “whip” impulse on rapid look reversals
	UPROPERTY(EditAnywhere, Category = "Impulse") float FlickThreshold = 2.5f; // look X delta magnitude to count as flick
	UPROPERTY(EditAnywhere, Category = "Impulse") float ImpulseRollDeg = 2.2f;
	UPROPERTY(EditAnywhere, Category = "Impulse") float ImpulseYawDeg = 0.9f;
	UPROPERTY(EditAnywhere, Category = "Impulse") float ImpulseDamping = 9.f;

	UPROPERTY(EditAnywhere, Category = "Sway")
	bool bUseControlRotationDelta = true;

	// Normalize yaw/pitch rates (deg/sec) by this “fast pan” reference
	UPROPERTY(EditAnywhere, Category = "Sway", meta = (ClampMin = "1.0"))
	float RefLookRateDegPerSec = 180.f;   // 180 = brisk sweep

	// Clamp and shape
	UPROPERTY(EditAnywhere, Category = "Sway")
	float MaxLookRateClamp = 540.f;       // don’t overreact to spikes
	UPROPERTY(EditAnywhere, Category = "Sway")
	float RateExponent = 1.15f;           // >1 exaggerates near extremes

	// Call this from your Character::Look() each frame with the LookAction value
	UFUNCTION(BlueprintCallable, Category = "Sway")
	void AddLookInput(const FVector2D& LookDelta);

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DT, ELevelTick, FActorComponentTickFunction*) override;

private:
	FRotator DefaultRelRot; FVector DefaultRelLoc;
	FVector2D LookInput{ 0,0 };
	float PrevLookX = 0.f;

	// Smoothed sway target (signed)
	float TargetRoll = 0.f, TargetYaw = 0.f, TargetPitch = 0.f, TargetOffsetY = 0.f;
	float CurRoll = 0.f, CurYaw = 0.f, CurPitch = 0.f, CurOffsetY = 0.f;

	// Impulse state
	float ImpRoll = 0.f, ImpYaw = 0.f;

	// Noise
	float NTime = 0.f; float NHzRoll = 1.f; float NHzOff = 1.f;

	FRotator PrevControlRot;
	bool bPrevRotValid = false;

	void EnsureRefs();
	void ChainAfterBob();
};
