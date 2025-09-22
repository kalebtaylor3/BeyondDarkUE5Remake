// ModularHidingSpot.cpp
#include "ModularHidingSpot.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "HidingSpotComponent.h"

AModularHidingSpot::AModularHidingSpot()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	ContainerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Container"));
	ContainerMesh->SetupAttachment(Root);

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	DoorMesh->SetupAttachment(ContainerMesh);

	EntryPoint = CreateDefaultSubobject<USceneComponent>(TEXT("EntryPoint"));
	EntryPoint->SetupAttachment(Root);

	ExitPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ExitPoint"));
	ExitPoint->SetupAttachment(Root);

	HidingSpot = CreateDefaultSubobject<UHidingSpotComponent>(TEXT("HidingSpot"));
	// Wire references for convenience
	HidingSpot->DoorComponent = DoorMesh;
	HidingSpot->EntryPoint = EntryPoint;
	HidingSpot->ExitPoint = ExitPoint;
}
