#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolZone.generated.h"

UCLASS()
class APatrolZone : public AActor
{
	GENERATED_BODY()
public:
	APatrolZone();

	UPROPERTY(EditAnywhere, Category = "Patrol")
	FName ZoneId;

	// Fill this in the editor with TargetPoints / empty actors as waypoints
	UPROPERTY(EditAnywhere, Category = "Patrol")
	TArray<AActor*> PatrolPoints;

	// Chance [0..1] to play a scare idle when reaching a point
	UPROPERTY(EditAnywhere, Category = "Scare")
	float ScareChancePerStop = 0.25f;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
