#include "VorgonVillageAI/PatrolZone.h"
#include "DrawDebugHelpers.h"

APatrolZone::APatrolZone()
{
	PrimaryActorTick.bCanEverTick = false;
}

#if WITH_EDITOR
void APatrolZone::PostEditChangeProperty(FPropertyChangedEvent& E)
{
	Super::PostEditChangeProperty(E);
	// simple editor viz: connect patrol points
	if (UWorld* W = GetWorld())
	{
		for (int32 i = 0; i < PatrolPoints.Num(); ++i)
		{
			if (PatrolPoints[i] && PatrolPoints[(i + 1) % PatrolPoints.Num()])
			{
				DrawDebugLine(W, PatrolPoints[i]->GetActorLocation(),
					PatrolPoints[(i + 1) % PatrolPoints.Num()]->GetActorLocation(),
					FColor::Purple, false, 2.f, 0, 4.f);
			}
		}
	}
}
#endif
