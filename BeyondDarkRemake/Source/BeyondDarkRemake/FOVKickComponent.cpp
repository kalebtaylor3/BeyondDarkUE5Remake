#include "FOVKickComponent.h"
#include "Camera/CameraComponent.h"

UFOVKickComponent::UFOVKickComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFOVKickComponent::BeginPlay()
{
	Super::BeginPlay();
	if (!Camera)
	{
		TArray<UCameraComponent*> Cams;
		GetOwner()->GetComponents<UCameraComponent>(Cams);
		if (Cams.Num()) Camera = Cams[0];
	}
	if (Camera)
	{
		BaseFOV = Camera->FieldOfView;
		TargetFOV = BaseFOV;
	}
}

void UFOVKickComponent::SetSprinting(bool bNowSprinting)
{
	bSprinting = bNowSprinting;
	TargetFOV = bSprinting ? BaseFOV + SprintFOVAdd : BaseFOV;
}

void UFOVKickComponent::TickComponent(float DT, ELevelTick, FActorComponentTickFunction*)
{
	if (!Camera) return;
	const float Speed = (Camera->FieldOfView < TargetFOV) ? EaseInSpeed : EaseOutSpeed;
	const float NewFOV = FMath::FInterpTo(Camera->FieldOfView, TargetFOV, DT, Speed);
	Camera->SetFieldOfView(NewFOV);
}
