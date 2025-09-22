#include "DirectionalLeanCameraModifier.h"

UDirectionalLeanCameraModifier::UDirectionalLeanCameraModifier()
{
	// Apply our desired priority at construction.
	// (UCameraModifier already has a Priority field.)
	Priority = DesiredPriority;
}

bool UDirectionalLeanCameraModifier::ModifyCamera(float /*DeltaTime*/, FMinimalViewInfo& InOutPOV)
{
	InOutPOV.Rotation.Pitch += AddRot.Pitch;
	InOutPOV.Rotation.Roll += AddRot.Roll;
	// Return false so other modifiers can still run.
	return false;
}
