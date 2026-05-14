#pragma once
#include "CoreMinimal.h"
#include "ETrackedStoryGoalState.generated.h"

UENUM(BlueprintType)
enum class ETrackedStoryGoalState : uint8 {
    Unplayed,
    Scheduled,
    ReadyToPlay,
    Played,
};

