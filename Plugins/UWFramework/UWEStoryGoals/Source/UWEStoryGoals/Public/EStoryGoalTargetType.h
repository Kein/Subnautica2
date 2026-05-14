#pragma once
#include "CoreMinimal.h"
#include "EStoryGoalTargetType.generated.h"

UENUM(BlueprintType)
enum class EStoryGoalTargetType : uint8 {
    NotSet,
    World,
    Player,
    Databank,
    Invalid,
};

