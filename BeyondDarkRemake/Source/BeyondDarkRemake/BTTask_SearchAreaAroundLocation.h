#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SearchAreaAroundLocation.generated.h"

/**
 * Picks a random search location around a base point (Investigate or LastKnownPlayerLocation)
 * and writes it to the blackboard key MonsterBB::InvestigateLocation.
 *
 * Typical use: in Search / Investigate subtrees before a MoveTo(InvestigateLocation).
 */
UCLASS()
class UBTTask_SearchAreaAroundLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SearchAreaAroundLocation();

protected:
	// Inner radius of the search ring (donut)
	UPROPERTY(EditAnywhere, Category = "Search")
	float MinRadius = 300.f;

	// Outer radius of the search ring (donut)
	UPROPERTY(EditAnywhere, Category = "Search")
	float MaxRadius = 900.f;

	// How many random attempts to make before giving up
	UPROPERTY(EditAnywhere, Category = "Search")
	int32 MaxAttempts = 8;

	// If true, use LastKnownPlayerLocation as the base point; otherwise use InvestigateLocation
	UPROPERTY(EditAnywhere, Category = "Search")
	bool bUseLastKnownLocation = true;

	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory
	) override;

private:
	bool FindSearchLocation(
		UWorld* World,
		const FVector& BaseLocation,
		FVector& OutLocation
	) const;
};
