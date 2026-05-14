#pragma once
#include "CoreMinimal.h"
#include "EMercunaObstacleReaction.generated.h"

UENUM(BlueprintType)
enum class EMercunaObstacleReaction : uint8 {
    Avoid,
    DoNotAvoid,
};

