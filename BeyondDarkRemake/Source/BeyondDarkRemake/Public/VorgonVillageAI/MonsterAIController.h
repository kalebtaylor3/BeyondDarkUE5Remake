#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "MonsterAIController.generated.h"

class UAIPerceptionComponent;
class UBlackboardComponent;
class UBehaviorTree;
class AMonsterCharacter;
class UMonsterAwarenessComponent;

UCLASS()
class AMonsterAIController : public AAIController
{
	GENERATED_BODY()

public:
	AMonsterAIController();

	virtual void OnPossess(APawn* InPawn) override;

	// Behavior tree to run for this monster (set in BP)
	UPROPERTY(EditAnywhere, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset = nullptr;

	// Perception component (sight + hearing config done in BP or constructor)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UAIPerceptionComponent* Perception = nullptr;

	// Blackboard used by the behavior tree
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	UBlackboardComponent* BlackboardComp = nullptr;

	// Accessor for the awareness component, in case other systems need it
	UFUNCTION(BlueprintCallable, Category = "AI")
	UMonsterAwarenessComponent* GetAwarenessComponent() const { return AwarenessComp; }

protected:
	// Called when a specific actor’s perception status changes (sight / hearing)
	UFUNCTION()
	void OnTargetPerception(AActor* Actor, FAIStimulus Stimulus);

private:
	// Cached controlled monster
	UPROPERTY()
	AMonsterCharacter* ControlledMonster = nullptr;

	// Cached awareness component from the monster
	UPROPERTY()
	UMonsterAwarenessComponent* AwarenessComp = nullptr;
};
