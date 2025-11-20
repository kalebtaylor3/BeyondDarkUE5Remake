#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SearchAreaAroundLocation.generated.h"

/**
 * Task: while in Search state, wander around the last known / investigate
 * location by visiting several random points (2–5 by default) on the navmesh.
 * At each point, Vorgon plays his scare montage, waits briefly, then moves on.
 * When all points are visited, the task Succeeds.
 */
UCLASS()
class UBTTask_SearchAreaAroundLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SearchAreaAroundLocation();

	/** If true, use LastKnownPlayerLocation as the base; otherwise use InvestigateLocation. */
	UPROPERTY(EditAnywhere, Category = "Search")
	bool bUseLastKnownLocation = true;

	/** Minimum radius from base location for search points. */
	UPROPERTY(EditAnywhere, Category = "Search")
	float MinRadius = 300.f;

	/** Maximum radius from base location for search points. */
	UPROPERTY(EditAnywhere, Category = "Search")
	float MaxRadius = 900.f;

	/** How many times we try to find a valid navmesh point per search point. */
	UPROPERTY(EditAnywhere, Category = "Search")
	int32 MaxAttempts = 16;

	/** Minimum number of search points Vorgon will visit in this search. */
	UPROPERTY(EditAnywhere, Category = "Search")
	int32 MinPoints = 2;

	/** Maximum number of search points Vorgon will visit in this search. */
	UPROPERTY(EditAnywhere, Category = "Search")
	int32 MaxPoints = 5;

	/** Distance considered "arrived" at a search point. */
	UPROPERTY(EditAnywhere, Category = "Search")
	float AcceptanceRadius = 120.f;

	/** Safety cap so he doesn't search forever if something is wrong. */
	UPROPERTY(EditAnywhere, Category = "Search")
	float MaxSearchDuration = 15.f;

	/** How long Vorgon pauses at each search point after playing the scare montage. */
	UPROPERTY(EditAnywhere, Category = "Search|Scare")
	float WaitAtPointDuration = 0.8f;

protected:
	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory) override;

	virtual void TickTask(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory,
		float DeltaSeconds) override;

	/** Find a single random navmesh point in a donut around BaseLocation. */
	bool FindSearchLocation(
		UWorld* World,
		const FVector& BaseLocation,
		FVector& OutLocation) const;

	/** Start moving to the current search point and update the BB InvestigateLocation. */
	void StartMoveToCurrentPoint(UBehaviorTreeComponent& OwnerComp);

private:
	// per-node-instance runtime state (because bCreateNodeInstance = true)
	TArray<FVector> SearchPoints;
	int32 CurrentPointIndex = 0;
	float ElapsedSearchTime = 0.f;
	bool bInitialized = false;

	// pause & scare at each point
	bool  bWaitingAtPoint = false;
	float CurrentWaitTime = 0.f;
};
