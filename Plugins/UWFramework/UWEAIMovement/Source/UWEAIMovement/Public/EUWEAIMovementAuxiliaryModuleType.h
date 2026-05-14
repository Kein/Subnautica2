#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementAuxiliaryModuleType.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementAuxiliaryModuleType : uint8 {
    None,
    OscillatoryMotion,
    SpeedAlteration,
    SpiralHeightChange = 4,
    StaticObstacleAvoidance = 8,
    CircularMotion = 16,
    Grouping = 32,
};

