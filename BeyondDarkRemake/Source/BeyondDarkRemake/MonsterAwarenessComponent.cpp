#include "MonsterAwarenessComponent.h"
#include "GameFramework/Actor.h"

UMonsterAwarenessComponent::UMonsterAwarenessComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UMonsterAwarenessComponent::BeginPlay()
{
	Super::BeginPlay();

	Awareness = 0.f;
	CurrentState = EMonsterState::Patrol;
	bHasLineOfSight = false;

	if (AActor* Owner = GetOwner())
	{
		LastKnownPlayerLocation = Owner->GetActorLocation();
		InvestigateLocation = LastKnownPlayerLocation;
	}
}

void UMonsterAwarenessComponent::TickComponent(
	float DeltaTime,
	ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdateAwareness(DeltaTime);
}

void UMonsterAwarenessComponent::HandleSightStimulus(AActor* Actor, const FAIStimulus& Stimulus)
{
	if (!Actor)
	{
		return;
	}

	const bool bSensed = Stimulus.WasSuccessfullySensed();
	bHasLineOfSight = bSensed;

	if (bSensed)
	{
		CurrentTargetActor = Actor;
		LastKnownPlayerLocation = Actor->GetActorLocation();
		InvestigateLocation = LastKnownPlayerLocation;

		const FVector MyLocation = GetOwner() ? GetOwner()->GetActorLocation() : FVector::ZeroVector;
		const float Distance = FVector::Dist(MyLocation, LastKnownPlayerLocation);
		const float DistanceFactor = FMath::Clamp(1.f - (Distance / SightMaxDistance), 0.f, 1.f);

		const float Gain = SightBaseGain * DistanceFactor;
		ApplyStimulusAwarenessGain(Gain);

		bJustThoughtWeSawSomething = true;
	}
	else
	{
		// Lost sight of this actor: store the last stimulus location as fallback
		if (CurrentTargetActor.Get() == Actor)
		{
			LastKnownPlayerLocation = Stimulus.StimulusLocation;
		}
	}
}

void UMonsterAwarenessComponent::HandleHearingStimulus(AActor* /*Actor*/, const FAIStimulus& Stimulus)
{
	if (!Stimulus.WasSuccessfullySensed())
	{
		return;
	}

	InvestigateLocation = Stimulus.StimulusLocation;

	const float Loudness = Stimulus.Strength; // usually ~1.0 for default noises
	const float Gain = HearingBaseGain * Loudness;
	ApplyStimulusAwarenessGain(Gain);

	bJustHeardNoise = true;
}

void UMonsterAwarenessComponent::ApplyStimulusAwarenessGain(float Gain)
{
	TimeSinceLastStimulus = 0.f;
	Awareness = FMath::Clamp(Awareness + Gain, 0.f, MaxAwareness);
}

void UMonsterAwarenessComponent::UpdateAwareness(float DeltaTime)
{
	TimeSinceLastStimulus += DeltaTime;
	const bool bRecentlyStimulated = (TimeSinceLastStimulus <= RecentStimulusGraceTime);

	// --- Decay awareness ---
	const float DecayMultiplier = bRecentlyStimulated ? 0.2f : 1.f;
	Awareness = FMath::Clamp(
		Awareness - DecayPerSecond * DecayMultiplier * DeltaTime,
		0.f,
		MaxAwareness
	);

	// --- Decide state ---
	EMonsterState NewState = CurrentState;

	if (Awareness >= FullAwarenessThreshold && CurrentTargetActor.IsValid())
	{
		// Fully aware ? chase
		NewState = EMonsterState::Chase;
		bHadFullAwarenessThisChase = true;
		bHasScreamedAfterLoss = false;
	}
	else if (bHadFullAwarenessThisChase && Awareness < LostThreshold)
	{
		// We lost the player after having full awareness
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
	else if (Awareness >= SuspiciousThreshold || bJustHeardNoise || bJustThoughtWeSawSomething)
	{
		NewState = EMonsterState::Investigate;
	}
	else
	{
		NewState = EMonsterState::Patrol;
		bHadFullAwarenessThisChase = false;
		bHasScreamedAfterLoss = false;
	}

	CurrentState = NewState;

	// Clear one-frame flags
	bJustHeardNoise = false;
	bJustThoughtWeSawSomething = false;
}
