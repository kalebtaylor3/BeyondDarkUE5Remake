#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "MonsterAwarenessComponent.generated.h"

class AActor;

UENUM(BlueprintType)
enum class EMonsterState : uint8
{
	Patrol      UMETA(DisplayName = "Patrol"),
	Investigate UMETA(DisplayName = "Investigate"),
	Chase       UMETA(DisplayName = "Chase"),
	Search      UMETA(DisplayName = "Search"),
	Scream      UMETA(DisplayName = "Scream"),
};

UCLASS(ClassGroup = (AI), meta = (BlueprintSpawnableComponent))
class UMonsterAwarenessComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMonsterAwarenessComponent();

	/* ---------------- Config ---------------- */

	// Maximum awareness value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float MaxAwareness = 100.f;

	// Awareness where Vorgon becomes suspicious and starts investigating
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float SuspiciousThreshold = 20.f;

	// Awareness where Vorgon is fully alerted and starts chasing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float FullAwarenessThreshold = 70.f;

	// After reaching full awareness, if it decays below this, we consider the player "lost"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float LostThreshold = 30.f;

	// Max distance used when scaling sight awareness gain
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float SightMaxDistance = 3000.f;

	// Base gain per sight tick at point-blank range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float SightBaseGain = 25.f;

	// Base gain when we hear a noise (scaled by loudness)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float HearingBaseGain = 15.f;

	// Awareness decay per second when calm (no recent stimuli)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float DecayPerSecond = 10.f;

	// Small grace period after a stimulus where decay is reduced
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Awareness|Config")
	float RecentStimulusGraceTime = 0.3f;

	/* ---------------- Runtime state ---------------- */

	// Current awareness value
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	float Awareness = 0.f;

	// High-level state the BT will branch on
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	EMonsterState CurrentState = EMonsterState::Patrol;

	// Do we currently have line of sight to the target?
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	bool bHasLineOfSight = false;

	// Last location where we saw the player
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	FVector LastKnownPlayerLocation = FVector::ZeroVector;

	// Location we should investigate (from either sight or hearing)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	FVector InvestigateLocation = FVector::ZeroVector;

	// Current target actor (usually the player)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Awareness|Runtime")
	TWeakObjectPtr<AActor> CurrentTargetActor;

	/* ---------------- Perception hooks ---------------- */

	// Called by the AI controller when sight perception updates for an actor
	void HandleSightStimulus(AActor* Actor, const FAIStimulus& Stimulus);

	// Called by the AI controller when hearing perception updates for an actor
	void HandleHearingStimulus(AActor* Actor, const FAIStimulus& Stimulus);

	/* ---------------- Getters (for BT service / BP) ---------------- */

	UFUNCTION(BlueprintCallable, Category = "Awareness")
	float GetAwareness() const { return Awareness; }

	UFUNCTION(BlueprintCallable, Category = "Awareness")
	EMonsterState GetState() const { return CurrentState; }

	UFUNCTION(BlueprintCallable, Category = "Awareness")
	bool HasLOS() const { return bHasLineOfSight; }

	UFUNCTION(BlueprintCallable, Category = "Awareness")
	AActor* GetTargetActor() const { return CurrentTargetActor.Get(); }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(
		float DeltaTime,
		enum ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction
	) override;

private:
	void UpdateAwareness(float DeltaTime);
	void ApplyStimulusAwarenessGain(float Gain);

	// Has Vorgon ever reached full awareness in this "engagement"?
	bool bHadFullAwarenessThisChase = false;

	// Has the anger scream already been triggered after losing the player?
	bool bHasScreamedAfterLoss = false;

	// One-frame flags for "we just got a stimulus"
	bool bJustHeardNoise = false;
	bool bJustThoughtWeSawSomething = false;

	// Time since the last sight/hearing stimulus
	float TimeSinceLastStimulus = 0.f;
};
