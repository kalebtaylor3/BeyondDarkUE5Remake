#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetNextPatrolPoint.generated.h"

/**
 * Picks the next patrol point for the monster and writes it to the blackboard.
 * Expects a blackboard key "CurrentPatrolPoint" (MonsterBB::CurrentPatrolPoint) of type Object (Actor).
 */
UCLASS()
class UBTTask_SetNextPatrolPoint : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_SetNextPatrolPoint();

protected:
	// Actor class used as patrol points (default = ATargetPoint)
	UPROPERTY(EditAnywhere, Category = "Patrol")
	TSubclassOf<AActor> PatrolPointClass;

	// Optional tag filter: if set, only actors with this tag will be considered as patrol points
	UPROPERTY(EditAnywhere, Category = "Patrol")
	FName PatrolTag;

	// Cached patrol points for this node instance
	UPROPERTY()
	TArray<AActor*> PatrolPoints;

	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory
	) override;

	// Helper: ensures PatrolPoints is populated
	void EnsurePatrolPoints(UWorld* World);
};
