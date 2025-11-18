#include "BTTask_SearchAreaAroundLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "GameFramework/Pawn.h"

#include "MonsterBB.h"

UBTTask_SearchAreaAroundLocation::UBTTask_SearchAreaAroundLocation()
{
	NodeName = TEXT("Search Area Around Location");
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_SearchAreaAroundLocation::ExecuteTask(
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

	FVector ChosenLocation = FVector::ZeroVector;
	if (!FindSearchLocation(World, BaseLocation, ChosenLocation))
	{
		return EBTNodeResult::Failed;
	}

	// Write the chosen search location into the BB
	BB->SetValueAsVector(MonsterBB::InvestigateLocation, ChosenLocation);

	return EBTNodeResult::Succeeded;
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
		// Pick a random radius in [InnerRadius, OuterRadius]
		const float Radius = FMath::FRandRange(InnerRadius, OuterRadius);

		// Pick a random angle in [0, 2?)
		const float Angle = FMath::FRandRange(0.f, 2.f * PI);

		const FVector Offset = FVector(
			FMath::Cos(Angle) * Radius,
			FMath::Sin(Angle) * Radius,
			0.f
		);

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
