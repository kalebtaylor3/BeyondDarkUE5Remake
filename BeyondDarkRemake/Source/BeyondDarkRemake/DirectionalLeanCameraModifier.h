#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "DirectionalLeanCameraModifier.generated.h"

/**
 * Runs inside PlayerCameraManager after control rotation.
 * We simply add pitch/roll to the final POV each frame.
 */
UCLASS()
class UDirectionalLeanCameraModifier : public UCameraModifier
{
	GENERATED_BODY()
public:
	UDirectionalLeanCameraModifier();

	// Set by your lean component each tick (degrees).
	UPROPERTY(Transient)
	FRotator AddRot = FRotator::ZeroRotator;

	// Keep this high so we run late (after most modifiers).
	UPROPERTY(EditAnywhere, Category = "Lean")
	int32 DesiredPriority = 200;

	// Main hook
	virtual bool ModifyCamera(float DeltaTime, FMinimalViewInfo& InOutPOV) override;
};
