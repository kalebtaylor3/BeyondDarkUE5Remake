#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Svc_UpdateAwareness.generated.h"

/**
 * Service: reads UMonsterAwarenessComponent and pushes its values into the Blackboard.
 * Run this on the root (or high-level) node of the BT at a small interval (0.1–0.25s).
 */
UCLASS()
class USvc_UpdateAwareness : public UBTService
{
	GENERATED_BODY()

public:
	USvc_UpdateAwareness();

protected:
	virtual void TickNode(
		UBehaviorTreeComponent& OwnerComp,
		uint8* NodeMemory,
		float DeltaSeconds
	) override;
};
