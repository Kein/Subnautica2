#pragma once
#include "CoreMinimal.h"
#include "EUWEStaticObstacleAvoidanceTraceDirection.generated.h"

UENUM(BlueprintType)
enum class EUWEStaticObstacleAvoidanceTraceDirection : uint8 {
    VelocityDirection,
    SteeringDirection,
    DesiredSteeringDirection,
};

