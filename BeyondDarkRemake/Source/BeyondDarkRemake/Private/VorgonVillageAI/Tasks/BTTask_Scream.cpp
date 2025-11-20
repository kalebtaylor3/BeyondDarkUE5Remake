#include "VorgonVillageAI/Tasks/BTTask_Scream.h"

#include "AIController.h"
#include "GameFramework/Pawn.h"

#include "VorgonVillageAI/MonsterCharacter.h"

UBTTask_Scream::UBTTask_Scream()
{
	NodeName = TEXT("Scream (Anger)");
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTTask_Scream::ExecuteTask(
	UBehaviorTreeComponent& OwnerComp,
	uint8* NodeMemory)
{
	AAIController* AIC = OwnerComp.GetAIOwner();
	if (!AIC)
	{
		return EBTNodeResult::Failed;
	}

	APawn* Pawn = AIC->GetPawn();
	if (!Pawn)
	{
		return EBTNodeResult::Failed;
	}

	AMonsterCharacter* Monster = Cast<AMonsterCharacter>(Pawn);
	if (!Monster)
	{
		return EBTNodeResult::Failed;
	}

	// Optionally stop movement while screaming
	if (bStopMovementDuringScream)
	{
		AIC->StopMovement();
	}

	// Ensure we are not in rush mode when screaming
	Monster->SetRushing(false);

	// Play the scream / anger montage if assigned
	Monster->PlayScareMontage();

	// We don't wait for the montage to finish here; use a Wait node in the BT
	// after this task if you want the monster to hold the scream pose for a bit.
	return EBTNodeResult::Succeeded;
}
