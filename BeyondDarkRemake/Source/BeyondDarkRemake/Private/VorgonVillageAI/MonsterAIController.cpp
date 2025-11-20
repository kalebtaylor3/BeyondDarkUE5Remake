#include "VorgonVillageAI/MonsterAIController.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISense_Hearing.h"

#include "VorgonVillageAI/MonsterCharacter.h"
#include "VorgonVillageAI/MonsterAwarenessComponent.h"

AMonsterAIController::AMonsterAIController()
{
	// Create and register perception component
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
	SetPerceptionComponent(*Perception);

	// We only care about the per-actor stimulus callback
	if (Perception)
	{
		Perception->OnTargetPerceptionUpdated.AddDynamic(
			this, &AMonsterAIController::OnTargetPerception);
	}

	// (Optional) You can configure default sight/hearing here or in BP
	// Leaving that to BP for now to keep this class focused.
}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	ControlledMonster = Cast<AMonsterCharacter>(InPawn);
	AwarenessComp = (ControlledMonster ? ControlledMonster->Awareness : nullptr);

	// Initialize blackboard + behavior tree
	if (BehaviorTreeAsset)
	{
		UBlackboardComponent* OutBB = nullptr;
		UseBlackboard(BehaviorTreeAsset->BlackboardAsset, OutBB);
		BlackboardComp = OutBB;

		if (BehaviorTreeAsset && BlackboardComp)
		{
			RunBehaviorTree(BehaviorTreeAsset);
		}
	}
}

void AMonsterAIController::OnTargetPerception(AActor* Actor, FAIStimulus Stimulus)
{
	if (!AwarenessComp || !Actor)
	{
		return;
	}

	// Route sight vs hearing to the awareness system.
	// It will decide how to modify awareness/state/locations.
	const FAISenseID SightID = UAISense::GetSenseID<UAISense_Sight>();
	const FAISenseID HearingID = UAISense::GetSenseID<UAISense_Hearing>();

	if (Stimulus.Type == SightID)
	{
		// Handle sight stimulus (both seeing and losing sight)
		AwarenessComp->HandleSightStimulus(Actor, Stimulus);
	}
	else if (Stimulus.Type == HearingID)
	{
		// Handle hearing stimulus (footsteps, noises, etc.)
		AwarenessComp->HandleHearingStimulus(Actor, Stimulus);
	}
}
