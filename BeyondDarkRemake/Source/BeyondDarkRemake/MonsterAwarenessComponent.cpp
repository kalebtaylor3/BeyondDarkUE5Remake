#include "MonsterAwarenessComponent.h"

#include "GameFramework/Actor.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AISense_Sight.h"

UMonsterAwarenessComponent::UMonsterAwarenessComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMonsterAwarenessComponent::BeginPlay()
{
	Super::BeginPlay();

	Awareness = 0.f;
	CurrentState = EMonsterState::Patrol;
	bHasLineOfSight = false;
	LastKnownPlayerLocation = FVector::ZeroVector;
	InvestigateLocation = FVector::ZeroVector;
	CurrentTargetActor = nullptr;
	TimeSinceLastStimulus = 0.f;
	bHadFullAwarenessThisChase = false;
	bHasScreamedAfterLoss = false;
}

void UMonsterAwarenessComponent::TickComponent(
	float DeltaTime,
	enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateAwareness(DeltaTime);

	// one–frame flags
	bJustHeardNoise = false;
	bJustThoughtWeSawSomething = false;
}

void UMonsterAwarenessComponent::HandleSightStimulus(AActor* Actor, const FAIStimulus& Stimulus)
{
	if (!Actor)
	{
		return;
	}

	CurrentTargetActor = Actor;
	LastKnownPlayerLocation = Actor->GetActorLocation();
	InvestigateLocation = LastKnownPlayerLocation;

	const bool bSensed = Stimulus.WasSuccessfullySensed();
	bHasLineOfSight = bSensed;

	if (bSensed)
	{
		// We "saw something" – treat as a strong stimulus and reset the stimulus timer.
		bJustThoughtWeSawSomething = true;
		TimeSinceLastStimulus = 0.f;

		AActor* OwnerActor = GetOwner();
		float Dist = 0.f;
		if (OwnerActor)
		{
			Dist = FVector::Dist(OwnerActor->GetActorLocation(), Actor->GetActorLocation());
		}

		const float DistNorm = FMath::Clamp(1.f - (Dist / SightMaxDistance), 0.f, 1.f);
		const float Gain = SightBaseGain * DistNorm;
		ApplyStimulusAwarenessGain(Gain);
	}
}

void UMonsterAwarenessComponent::HandleHearingStimulus(AActor* Actor, const FAIStimulus& Stimulus)
{
	const bool bSensed = Stimulus.WasSuccessfullySensed();
	if (!bSensed)
	{
		return;
	}

	bJustHeardNoise = true;
	TimeSinceLastStimulus = 0.f;

	InvestigateLocation = Stimulus.StimulusLocation;

	// We can also treat the sound source as the current target, if provided.
	if (Actor)
	{
		CurrentTargetActor = Actor;
	}

	// Loudness is in Stimulus.Strength
	const float Loudness = FMath::Clamp(Stimulus.Strength, 0.4f, 2.0f);
	const float Gain = HearingBaseGain * Loudness;
	ApplyStimulusAwarenessGain(Gain);
}

void UMonsterAwarenessComponent::ApplyStimulusAwarenessGain(float Gain)
{
	if (Gain <= 0.f)
	{
		return;
	}

	Awareness = FMath::Clamp(Awareness + Gain, 0.f, MaxAwareness);
	TimeSinceLastStimulus = 0.f;
}

void UMonsterAwarenessComponent::UpdateAwareness(float DeltaTime)
{
	TimeSinceLastStimulus += DeltaTime;

	AActor* OwnerActor = GetOwner();
	AActor* TargetActor = CurrentTargetActor.Get();

	// --- Continuous gain while we have LOS ---
	if (bHasLineOfSight && OwnerActor && TargetActor)
	{
		const float Dist = FVector::Dist(OwnerActor->GetActorLocation(), TargetActor->GetActorLocation());
		const float DistNorm = FMath::Clamp(1.f - (Dist / SightMaxDistance), 0.f, 1.f);

		// Gain per second, scaled by distance
		const float GainPerSec = SightBaseGain * DistNorm;
		ApplyStimulusAwarenessGain(GainPerSec * DeltaTime);
	}

	// --- Decay when we haven't had a stimulus recently ---
	const bool bRecentlyStimulated = (TimeSinceLastStimulus <= RecentStimulusGraceTime);

	float DecayRate = DecayPerSecond;
	if (bRecentlyStimulated)
	{
		// soften decay briefly after a stimulus so the meter doesn't instantly plummet
		DecayRate *= 0.3f;
	}

	if (Awareness > 0.f && DecayRate > 0.f)
	{
		Awareness = FMath::Clamp(
			Awareness - DecayRate * DeltaTime,
			0.f,
			MaxAwareness);
	}

	// --- State transitions ---
	EMonsterState NewState = CurrentState;

	if (Awareness >= FullAwarenessThreshold && TargetActor)
	{
		// fully alerted
		NewState = EMonsterState::Chase;
		bHadFullAwarenessThisChase = true;
		bHasScreamedAfterLoss = false;
	}
	else if (bHadFullAwarenessThisChase && Awareness < LostThreshold)
	{
		// lost the player after being fully aware
		if (!bHasScreamedAfterLoss)
		{
			NewState = EMonsterState::Scream;
			bHasScreamedAfterLoss = true;
		}
		else
		{
			NewState = EMonsterState::Search;
		}
	}
	else if (Awareness >= SuspiciousThreshold)
	{
		NewState = EMonsterState::Investigate;
	}
	else
	{
		// calm down back to patrol
		NewState = EMonsterState::Patrol;
		bHadFullAwarenessThisChase = false;
		bHasScreamedAfterLoss = false;
	}

	CurrentState = NewState;
}
