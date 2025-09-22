// ModularHidingSpot.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModularHidingSpot.generated.h"

class UHidingSpotComponent;

UCLASS()
class AModularHidingSpot : public AActor
{
	GENERATED_BODY()

public:
	AModularHidingSpot();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<USceneComponent> Root;

	/** The static mesh (locker/chest) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<UStaticMeshComponent> ContainerMesh;

	/** The door/lid mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<UStaticMeshComponent> DoorMesh;

	/** Entry & Exit helper points */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<USceneComponent> EntryPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<USceneComponent> ExitPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hiding")
	TObjectPtr<UHidingSpotComponent> HidingSpot;
};
