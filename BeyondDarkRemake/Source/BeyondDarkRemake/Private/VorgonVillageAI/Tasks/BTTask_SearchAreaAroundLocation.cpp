#include "VorgonVillageAI/Tasks/BTTask_SearchAreaAroundLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"
#include "HAL/IConsoleManager.h"
#include "Engine/Engine.h"

#include "VorgonVillageAI/MonsterBB.h"
#include "VorgonVillageAI/MonsterCharacter.h"
#include "VorgonVillageAI/MonsterStates.h"
#include "VorgonVillageAI/MonsterAwarenessComponent.h"

// Console toggle for search debug (1 = on, 0 = off)
static TAutoConsoleVariable<int32> CVarMonsterSearchDebug(
	TEXT("ai.MonsterSearchDebug"),
	1,
	TEXT("Toggle Monster search debug (0=off, 1=on)"));

UBTTask_SearchAreaAroundLocation::UBTTask_SearchAreaAroundLocation()
{
	NodeName = TEXT("Search Area Around Location");

	// We want our own per-node state and ticking while in progress
	bCreateNodeInstance = true;
	bNotifyTick = true;

	// Defaults (editable in the editor)
	MinRadius = 300.f;
	MaxRadius = 900.f;
	MaxAttempts = 16;
	MinPoints = 2;
	MaxPoints = 5;
	AcceptanceRadius = 200.f;   // a bit more forgiving
	MaxSearchDuration = 0.f;    // <= 0 = no time limit

	WaitAtPointDuration = 0.8f;

	CurrentPointIndex = 0;
	ElapsedSearchTime = 0.f;
	bInitialized = false;
	bWaitingAtPoint = false;
	CurrentWaitTime = 0.f;
}

EBTNodeResult::Type UBTTask_SearchAreaAroundLocation::ExecuteTask(
	UBehaviorTreeComponent& OwnerComp,
	uint8* /*NodeMemory*/)
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

	// Decide which base location to use
	FVector BaseLocation = FVector::ZeroVector;
	if (bUseLastKnownLocation)
	{
		BaseLocation = BB->GetValueAsVector(MonsterBB::LastKnownPlayerLocation);
	}
	else
	{
		BaseLocation = BB->GetValueAsVector(MonsterBB::InvestigateLocation);
	}

	// Fallback: if base is not valid-ish, use pawn location
	if (BaseLocation.IsNearlyZero())
	{
		if (APawn* Pawn = AIC->GetPawn())
		{
			BaseLocation = Pawn->GetActorLocation();
		}
	}

	if (BaseLocation.IsNearlyZero())
	{
		return EBTNodeResult::Failed;
	}

	// Reset runtime state
	SearchPoints.Reset();
	CurrentPointIndex = 0;
	ElapsedSearchTime = 0.f;
	bInitialized = false;
	bWaitingAtPoint = false;
	CurrentWaitTime = 0.f;

	// How many points should we search this time?
	const int32 DesiredPoints = FMath::Clamp(
		FMath::RandRange(MinPoints, MaxPoints),
		1,
		MaxPoints);

	for (int32 i = 0; i < DesiredPoints; ++i)
	{
		FVector Point;
		if (FindSearchLocation(World, BaseLocation, Point))
		{
			SearchPoints.Add(Point);
		}
	}

	if (SearchPoints.Num() == 0)
	{
		// Couldn't find any valid points
		return EBTNodeResult::Failed;
	}

	bInitialized = true;

	// === DEBUG: visualize generated search points ===
	if (CVarMonsterSearchDebug.GetValueOnGameThread() != 0)
	{
		const float LifeTime = 4.0f; // enough time to see the pattern

		for (int32 i = 0; i < SearchPoints.Num(); ++i)
		{
			const FVector& P = SearchPoints[i];

			// Yellow spheres where he will search
			DrawDebugSphere(
				World,
				P,
				60.f,
				16,
				FColor::Yellow,
				false,
				LifeTime
			);

			// Line from base location to each search point
			DrawDebugLine(
				World,
				BaseLocation + FVector(0.f, 0.f, 10.f),
				P + FVector(0.f, 0.f, 10.f),
				FColor::Yellow,
				false,
				LifeTime,
				0,
				2.0f
			);

			// Label S0, S1, S2...
			DrawDebugString(
				World,
				P + FVector(0.f, 0.f, 80.f),
				FString::Printf(TEXT("S%d"), i),
				nullptr,
				FColor::White,
				LifeTime
			);
		}
	}

	// Kick off movement to the first point
	StartMoveToCurrentPoint(OwnerComp);

	// We'll finish later in TickTask once all points are visited
	return EBTNodeResult::InProgress;
}

static void ForcePatrolState(AAIController* AIC)
{
	if (!AIC) return;

	APawn* Pawn = AIC->GetPawn();
	if (!Pawn) return;

	if (UMonsterAwarenessComponent* Awareness = Pawn->FindComponentByClass<UMonsterAwarenessComponent>())
	{
		Awareness->ForceState(EMonsterState::Patrol, true);
	}
}

void UBTTask_SearchAreaAroundLocation::TickTask(
	UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory,
	float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (!bInitialized)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	ElapsedSearchTime += DeltaSeconds;

	// Optional global timeout – only if MaxSearchDuration > 0
	if (MaxSearchDuration > 0.f && ElapsedSearchTime > MaxSearchDuration)
	{
		if (AAIController* AIC = OwnerComp.GetAIOwner())
		{
			AIC->StopMovement();
			ForcePatrolState(AIC);
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	AAIController* AIC = OwnerComp.GetAIOwner();
	APawn* Pawn = AIC ? AIC->GetPawn() : nullptr;
	if (!Pawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
		return;
	}

	// ===== If we're currently waiting at a point (after scare montage), just count down =====
	if (bWaitingAtPoint)
	{
		CurrentWaitTime -= DeltaSeconds;
		if (CurrentWaitTime <= 0.f)
		{
			bWaitingAtPoint = false;

			// Move on to the next point
			++CurrentPointIndex;

			if (!SearchPoints.IsValidIndex(CurrentPointIndex))
			{
				// Done searching all points
				if (AIC)
				{
					AIC->StopMovement();
					ForcePatrolState(AIC);
				}
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return;
			}

			// Start moving to the next point
			StartMoveToCurrentPoint(OwnerComp);
		}

		// While waiting, don't check distance / move status
		return;
	}

	// ======================================================================================

	if (!SearchPoints.IsValidIndex(CurrentPointIndex))
	{
		// No more points to visit (extra safety)
		if (AIC)
		{
			AIC->StopMovement();
			ForcePatrolState(AIC);
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
		return;
	}

	const FVector CurrentTarget = SearchPoints[CurrentPointIndex];
	const float Dist2D = FVector::Dist2D(Pawn->GetActorLocation(), CurrentTarget);

	// Check move status so we don't rely purely on distance
	EPathFollowingStatus::Type MoveStatus = AIC->GetMoveStatus();

	// DEBUG: highlight the current target point (red sphere)
	if (CVarMonsterSearchDebug.GetValueOnGameThread() != 0)
	{
		if (UWorld* World = Pawn->GetWorld())
		{
			DrawDebugSphere(
				World,
				CurrentTarget,
				70.f,
				16,
				FColor::Red,
				false,
				0.2f // short lifetime, refreshed each tick
			);
		}

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				(int32)((PTRINT)this),
				0.f,
				FColor::Green,
				FString::Printf(TEXT("Search idx %d / %d  Move=%d  Dist=%.0f  Waiting=%s"),
					CurrentPointIndex,
					SearchPoints.Num(),
					(int32)MoveStatus,
					Dist2D,
					bWaitingAtPoint ? TEXT("Y") : TEXT("N")));
		}
	}

	// Consider the point "reached" if:
	//  - pathfollowing is no longer moving (Idle/Waiting/Paused) OR
	//  - we're within AcceptanceRadius
	const bool bMoveFinished =
		(MoveStatus != EPathFollowingStatus::Moving) ||
		(Dist2D <= AcceptanceRadius);

	if (bMoveFinished)
	{
		// ===== We've reached (or at least finished moving toward) the point =====
		if (AMonsterCharacter* Monster = Cast<AMonsterCharacter>(Pawn))
		{
			if (Monster->Montage_Scare)
			{
				Monster->PlayAnimMontage(Monster->Montage_Scare);
			}
		}

		bWaitingAtPoint = true;
		CurrentWaitTime = WaitAtPointDuration;

		// We don't increment index yet; that happens after the wait finishes
	}
}

bool UBTTask_SearchAreaAroundLocation::FindSearchLocation(
	UWorld* World,
	const FVector& BaseLocation,
	FVector& OutLocation) const
{
	if (!World)
	{
		return false;
	}

	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (!NavSys)
	{
		return false;
	}

	const float InnerRadius = FMath::Max(0.f, MinRadius);
	const float OuterRadius = FMath::Max(InnerRadius, MaxRadius);

	for (int32 Attempt = 0; Attempt < MaxAttempts; ++Attempt)
	{
		const float Radius = FMath::FRandRange(InnerRadius, OuterRadius);
		const float Angle = FMath::FRandRange(0.f, 2.f * PI);

		const FVector Offset(
			FMath::Cos(Angle) * Radius,
			FMath::Sin(Angle) * Radius,
			0.f);

		const FVector Candidate = BaseLocation + Offset;

		FNavLocation NavLoc;
		if (NavSys->ProjectPointToNavigation(Candidate, NavLoc))
		{
			OutLocation = NavLoc.Location;
			return true;
		}
	}

	return false;
}

void UBTTask_SearchAreaAroundLocation::StartMoveToCurrentPoint(
	UBehaviorTreeComponent& OwnerComp)
{
	AAIController* AIC = OwnerComp.GetAIOwner();
	if (!AIC)
	{
		return;
	}

	if (!SearchPoints.IsValidIndex(CurrentPointIndex))
	{
		return;
	}

	const FVector Dest = SearchPoints[CurrentPointIndex];

	// Keep BB InvestigateLocation in sync for debug / other logic
	if (UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent())
	{
		BB->SetValueAsVector(MonsterBB::InvestigateLocation, Dest);
	}

	FAIMoveRequest MoveReq(Dest);
	MoveReq.SetUsePathfinding(true);
	MoveReq.SetAcceptanceRadius(AcceptanceRadius);

	AIC->MoveTo(MoveReq);
}
