#include "BTTask_SetNextPatrolPoint.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TargetPoint.h"    // <-- IMPORTANT include

#include "MonsterBB.h"

UBTTask_SetNextPatrolPoint::UBTTask_SetNextPatrolPoint()
{
	NodeName = TEXT("Set Next Patrol Point");

	// Use separate node instances so each AI can track its own patrol list/index safely
	bCreateNodeInstance = true;

	// Default to ATargetPoint if nothing is set in the editor
	PatrolPointClass = ATargetPoint::StaticClass();
}

void UBTTask_SetNextPatrolPoint::EnsurePatrolPoints(UWorld* World)
{
	if (!World || PatrolPoints.Num() > 0 || PatrolPointClass == nullptr)
	{
		return;
	}

	TArray<AActor*> AllPoints;
	UGameplayStatics::GetAllActorsOfClass(World, PatrolPointClass, AllPoints);

	if (PatrolTag.IsNone())
	{
		PatrolPoints = AllPoints;
	}
	else
	{
		for (AActor* Actor : AllPoints)
		{
			if (Actor && Actor->Tags.Contains(PatrolTag))
			{
				PatrolPoints.Add(Actor);
			}
		}
	}
}

EBTNodeResult::Type UBTTask_SetNextPatrolPoint::ExecuteTask(
	UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	AAIController* AIC = OwnerComp.GetAIOwner();
	if (!AIC)
	{
		return EBTNodeResult::Failed;
	}

	UWorld* World = AIC->GetWorld();
	if (!World)
	{
		return EBTNodeResult::Failed;
	}

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB)
	{
		return EBTNodeResult::Failed;
	}

	// Make sure we have patrol points cached
	EnsurePatrolPoints(World);

	if (PatrolPoints.Num() == 0)
	{
		// No patrol points in the level – nothing to set
		return EBTNodeResult::Failed;
	}

	// Get current patrol point from BB (if any)
	AActor* CurrentPoint = Cast<AActor>(BB->GetValueAsObject(MonsterBB::CurrentPatrolPoint));

	int32 NextIndex = 0;

	if (CurrentPoint)
	{
		const int32 CurrentIdx = PatrolPoints.IndexOfByKey(CurrentPoint);
		if (CurrentIdx != INDEX_NONE)
		{
			NextIndex = (CurrentIdx + 1) % PatrolPoints.Num();
		}
	}

	AActor* NextPoint = PatrolPoints.IsValidIndex(NextIndex) ? PatrolPoints[NextIndex] : nullptr;
	if (!NextPoint)
	{
		return EBTNodeResult::Failed;
	}

	// Write next point into blackboard
	BB->SetValueAsObject(MonsterBB::CurrentPatrolPoint, NextPoint);

	return EBTNodeResult::Succeeded;
}
