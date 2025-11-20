#include "VorgonVillageAI/Services/Svc_UpdateAwareness.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"
#include "HAL/IConsoleManager.h"
#include "VorgonVillageAI/MonsterStates.h"
#include "VorgonVillageAI/MonsterAwarenessComponent.h"
#include "VorgonVillageAI/MonsterCharacter.h"
#include "VorgonVillageAI/MonsterBB.h"
#include "Engine/Engine.h" // GEngine->AddOnScreenDebugMessage

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

// Color for both bar + text based on state
static FColor StateDebugColor(EMonsterState State)
{
	switch (State)
	{
	case EMonsterState::Patrol:      return FColor(100, 255, 100);   // light green
	case EMonsterState::Investigate: return FColor(255, 180, 60);    // orange
	case EMonsterState::Search:      return FColor(80, 200, 255);    // blue/cyan
	case EMonsterState::Chase:       return FColor(255, 80, 80);     // red
	case EMonsterState::Scream:      return FColor(255, 100, 255);   // magenta
	default:                         return FColor::White;
	}
}

void USvc_UpdateAwareness::TickNode(
	UBehaviorTreeComponent& OwnerComp,
	uint8* /*NodeMemory*/,
	float DeltaSeconds)
{
	// We don't really need the base implementation here
	// Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

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

		// Lifetime just a bit longer than your service tick (e.g. ~0.1s)
		const float DebugDuration = 0.18f;

		// State-tinted color
		const FColor StateColor = StateDebugColor(State);

		// ========================
		// 1) 3D PROGRESS BAR ABOVE HEAD
		// ========================

		const float BarLength = 220.f;   // world units
		const float BarOffsetZ = 110.f;   // height above head
		const float BarThicknessFilled = 8.f;
		const float BarThicknessEmpty = 4.f;

		// Start at left side of the bar above the head
		const FVector BarStart = HeadLoc + FVector(-BarLength * 0.5f, 0.f, BarOffsetZ);
		const FVector BarEnd = BarStart + FVector(BarLength, 0.f, 0.f);

		// Filled part
		const float FilledLen = BarLength * AwarenessNorm;
		const FVector FilledEnd = BarStart + FVector(FilledLen, 0.f, 0.f);

		// Draw the filled segment in state color
		if (FilledLen > KINDA_SMALL_NUMBER)
		{
			DrawDebugLine(
				World,
				BarStart,
				FilledEnd,
				StateColor,
				false,
				DebugDuration,
				0,
				BarThicknessFilled
			);
		}

		// Draw the rest of the bar in dark grey
		if (FilledLen < BarLength - KINDA_SMALL_NUMBER)
		{
			DrawDebugLine(
				World,
				FilledEnd,
				BarEnd,
				FColor(30, 30, 30),
				false,
				DebugDuration,
				0,
				BarThicknessEmpty
			);
		}

		// ========================
		// 2) SIMPLE HUD TEXT (STATE-COLORED)
		// ========================

		float TargetDist = 0.f;
		if (TargetActor)
		{
			TargetDist = FVector::Dist(SelfLoc, TargetActor->GetActorLocation());
		}

		if (GEngine)
		{
			const FString Msg = FString::Printf(
				TEXT("VORGON  |  Awr: %.0f / %.0f (%.0f%%)  |  State: %s  |  LOS: %s  |  Dist: %.0f"),
				Awareness,
				MaxAwareness,
				AwarenessNorm * 100.f,
				*StateToString(State),
				bHasLOS ? TEXT("Y") : TEXT("N"),
				TargetDist
			);

			// key = 1 so we overwrite the same line every tick
			GEngine->AddOnScreenDebugMessage(
				1,
				DebugDuration,
				StateColor,  // matches bar color
				Msg,
				false
			);
		}

		// OPTIONAL: tiny LOS line; comment out if you don't need it
		if (TargetActor)
		{
			const FVector TargetHead = TargetActor->GetActorLocation() + FVector(0.f, 0.f, 60.f);
			DrawDebugLine(
				World,
				HeadLoc,
				TargetHead,
				bHasLOS ? FColor::Cyan : FColor(80, 80, 80),
				false,
				DebugDuration,
				0,
				.2f
			);
		}
	}
}
