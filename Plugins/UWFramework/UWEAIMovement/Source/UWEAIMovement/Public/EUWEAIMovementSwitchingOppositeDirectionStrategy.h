#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementSwitchingOppositeDirectionStrategy.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementSwitchingOppositeDirectionStrategy : uint8 {
    ShortestAngle,
    RotateCurrentSteeringDirection,
    RotateAroundMiddleDirection,
};

