#pragma once

#include "CoreMinimal.h"
#include "MonsterStates.generated.h"

UENUM(BlueprintType)
enum class EMonsterState : uint8
{
    Patrol      UMETA(DisplayName = "Patrol"),
    Investigate UMETA(DisplayName = "Investigate"),
    Chase       UMETA(DisplayName = "Chase"),
    Search      UMETA(DisplayName = "Search"),
    Scream      UMETA(DisplayName = "Scream"),
};
