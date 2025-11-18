#include "Svc_UpdateAwareness.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
#include "HAL/IConsoleManager.h"

#include "MonsterAwarenessComponent.h"
#include "MonsterCharacter.h"
#include "MonsterBB.h"   // Make sure this defines: Awareness, State, HasLineOfSight, TargetActor, LastKnownPlayerLocation, InvestigateLocation, ShouldScream

// Console toggle for debug draws (1 = on, 0 = off)
static TAutoConsoleVariable<int32> CVarAIDebugAwareness(
	TEXT("ai.MonsterAwarenessDebug"),
	1,
	TEXT("Toggle Monster awareness debug (0=off, 1=on)"));

USvc_UpdateAwareness::USvc_UpdateAwareness()
{
	NodeName = TEXT("Sync Awareness To Blackboard (+Debug)");
	bNotifyTick = true;
	bCreateNodeInstance = true; // safer when shared between many AIs
}

static FORCEINLINE FColor HeatColor(float T01)
{
	T01 = FMath::Clamp(T01, 0.f, 1.f);
	const FLinearColor C = FLinearColor::LerpUsingHSV(FLinearColor::Green, FLinearColor::Red, T01);
	return C.ToFColor(true);
}

static FString StateToString(EMonsterState State)
{
	switch (State)
	{
	case EMonsterState::Patrol:      return TEXT("Patrol");
	case EMonsterState::Investigate: return TEXT("Investigate");
	case EMonsterState::Chase:       return TEXT("Chase");
	case EMonsterState::Search:      return TEXT("Search");
	case EMonsterState::Scream:      return TEXT("Scream");
	default:                         return TEXT("Unknown");
	}
}

void USvc_UpdateAwareness::TickNode(
	UBehaviorTreeComponent& OwnerComp,
	uint8* /*NodeMemory*/,
	float DeltaSeconds)
{
	Super::TickNode(OwnerComp, nullptr, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	AAIController* AIC = OwnerComp.GetAIOwner();
	APawn* Pawn = AIC ? AIC->GetPawn() : nullptr;

	if (!BB || !Pawn)
	{
		return;
	}

	UMonsterAwarenessComponent* AwarenessComp = Pawn->FindComponentByClass<UMonsterAwarenessComponent>();
	if (!AwarenessComp)
	{
		return;
	}

	// --- Read awareness component state ---
	const float Awareness = AwarenessComp->GetAwareness();
	const float MaxAwareness = AwarenessComp->MaxAwareness;
	const float AwarenessNorm = (MaxAwareness > 0.f)
		? FMath::Clamp(Awareness / MaxAwareness, 0.f, 1.f)
		: 0.f;

	const EMonsterState State = AwarenessComp->GetState();
	const bool bHasLOS = AwarenessComp->HasLOS();
	AActor* TargetActor = AwarenessComp->GetTargetActor();
	const FVector LastKnownLoc = AwarenessComp->LastKnownPlayerLocation;
	const FVector InvestigateLoc = AwarenessComp->InvestigateLocation;

	// --- Write to blackboard ---
	BB->SetValueAsFloat(MonsterBB::Awareness, Awareness);
	BB->SetValueAsEnum(MonsterBB::State, static_cast<uint8>(State));
	BB->SetValueAsBool(MonsterBB::HasLineOfSight, bHasLOS);
	BB->SetValueAsObject(MonsterBB::TargetActor, TargetActor);
	BB->SetValueAsVector(MonsterBB::LastKnownPlayerLocation, LastKnownLoc);
	BB->SetValueAsVector(MonsterBB::InvestigateLocation, InvestigateLoc);

	// Convenience flag for the BT to check when entering scream branch
	const bool bShouldScream = (State == EMonsterState::Scream);
	BB->SetValueAsBool(MonsterBB::ShouldScream, bShouldScream);

	// --- Debug drawing ---
	if (CVarAIDebugAwareness.GetValueOnGameThread() != 0)
	{
		UWorld* World = Pawn->GetWorld();
		if (!World)
		{
			return;
		}

		const FVector SelfLoc = Pawn->GetActorLocation();
		const FVector HeadLoc = SelfLoc + FVector(0.f, 0.f, 90.f);

		// Awareness bar
		const float BarLen = 140.f;
		const float FilledLen = BarLen * AwarenessNorm;
		const FColor BarColor = HeatColor(AwarenessNorm);

		const FVector BarStart = HeadLoc + FVector(0.f, 0.f, 25.f);
		const FVector BarEndFilled = BarStart + FVector(FilledLen, 0.f, 0.f);
		const FVector BarEndTotal = BarStart + FVector(BarLen, 0.f, 0.f);

		DrawDebugLine(World, BarStart, BarEndFilled, BarColor, false, 0.06f, 0, 4.f);
		DrawDebugLine(World, BarEndFilled, BarEndTotal, FColor(50, 50, 50), false, 0.06f, 0, 1.f);

		// Text: awareness + state + LOS
		FString DebugText = FString::Printf(
			TEXT("Awr=%.1f / %.0f  (%.0f%%)\nState=%s  LOS=%s"),
			Awareness,
			MaxAwareness,
			AwarenessNorm * 100.f,
			*StateToString(State),
			bHasLOS ? TEXT("Y") : TEXT("N")
		);

		if (TargetActor)
		{
			DebugText += FString::Printf(
				TEXT("\nTargetDist=%.0f"),
				FVector::Dist(SelfLoc, TargetActor->GetActorLocation()));
		}

		DrawDebugString(
			World,
			HeadLoc + FVector(0.f, 0.f, 45.f),
			DebugText,
			nullptr,
			BarColor,
			0.f,
			false,
			1.2f
		);

		// LOS line to target if we have one
		if (TargetActor)
		{
			const FVector TargetHead = TargetActor->GetActorLocation() + FVector(0.f, 0.f, 60.f);
			DrawDebugLine(
				World,
				HeadLoc,
				TargetHead,
				bHasLOS ? FColor::Cyan : FColor(80, 80, 80),
				false,
				0.06f,
				0,
				1.5f);
		}
	}
}
