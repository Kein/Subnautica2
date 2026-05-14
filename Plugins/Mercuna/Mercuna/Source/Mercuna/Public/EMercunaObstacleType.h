#pragma once
#include "CoreMinimal.h"
#include "EMercunaObstacleType.generated.h"

UENUM(BlueprintType)
enum class EMercunaObstacleType : uint8 {
    Sphere,
    Box,
    Cylinder,
};

