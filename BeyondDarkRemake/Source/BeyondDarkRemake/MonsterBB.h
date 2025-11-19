#pragma once
#include "CoreMinimal.h"

namespace MonsterBB
{
    // MUST match BB_Vorgon key names exactly

    static const FName TargetActor = TEXT("TargetActor");
    static const FName State = TEXT("State");
    static const FName Awareness = TEXT("Awareness");
    static const FName HasLineOfSight = TEXT("HasLineOfSight");
    static const FName InvestigateLocation = TEXT("InvestigateLocation");
    static const FName LastKnownPlayerLocation = TEXT("LastKnownPlayerLocation");

    // Your BB key is called "PatrolPoint"
    static const FName CurrentPatrolPoint = TEXT("PatrolPoint");

    // Your BB key is called "bShouldScream"
    static const FName ShouldScream = TEXT("bShouldScream");

    // Optional keys you added (not strictly required by the code yet)
    static const FName HeardNoiseRecently = TEXT("bHeardNoiseRecently");
    static const FName SelfActor = TEXT("SelfActor");
}
