#pragma once
#include "CoreMinimal.h"

// Centralized BB key names to avoid typos
namespace MonsterBB
{
	// --- Core perception / awareness ---

	// Object: AActor (usually the player)
	static const FName TargetActor = TEXT("TargetActor");

	// Float: raw awareness value from UMonsterAwarenessComponent (0..MaxAwareness)
	static const FName Awareness = TEXT("Awareness");

	// Enum (Byte): EMonsterState, stored as uint8 in the BB
	static const FName State = TEXT("State");

	// Bool: whether the monster currently has LOS on TargetActor
	static const FName HasLineOfSight = TEXT("HasLineOfSight");

	// Vector: last place we *saw* the player
	static const FName LastKnownPlayerLocation = TEXT("LastKnownPlayerLocation");

	// Vector: where to go investigate (from sight or hearing)
	static const FName InvestigateLocation = TEXT("InvestigateLocation");

	// Bool: convenience flag so BT can quickly branch into scream subtree
	static const FName ShouldScream = TEXT("ShouldScream");

	// --- Patrol / world context ---

	// Optional: if you’re using zone-based patrols
	static const FName CurrentZone = TEXT("CurrentZone");

	// Object: current patrol point actor (or use Vector if you prefer)
	static const FName CurrentPatrolPoint = TEXT("CurrentPatrolPoint");

	// Optional: stalk-specific location if you keep that behavior
	static const FName StalkLoc = TEXT("StalkLoc");

	// --- Legacy / optional keys (safe to remove once all old BT logic is gone) ---

	// If you still use hiding spot logic elsewhere
	static const FName CurrentHideSpot = TEXT("CurrentHideSpot");
	static const FName bPlayerInHideSpot = TEXT("bPlayerInHideSpot");
}
