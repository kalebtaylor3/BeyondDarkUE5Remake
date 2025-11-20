#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Scream.generated.h"

/**
 * Plays the monster's scream/anger montage (Montage_Scare on AMonsterCharacter).
 * Typically used when the monster loses the player after a chase.
 */
UCLASS()
class UBTTask_Scream : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_Scream();

protected:
	// If true, StopMovement() will be called on the AIController before screaming.
	UPROPERTY(EditAnywhere, Category = "Scream")
	bool bStopMovementDuringScream = true;

	virtual EBTNodeResult::Type ExecuteTask(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory
	) override;
};
