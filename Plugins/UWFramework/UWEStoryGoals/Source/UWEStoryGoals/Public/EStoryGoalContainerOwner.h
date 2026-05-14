#pragma once
#include "CoreMinimal.h"
#include "EStoryGoalContainerOwner.generated.h"

UENUM(BlueprintType)
enum class EStoryGoalContainerOwner : uint8 {
    Player,
    World,
    Invalid,
};

