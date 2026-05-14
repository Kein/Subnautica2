#pragma once
#include "CoreMinimal.h"
#include "EMercunaObstacleMovementType.generated.h"

UENUM(BlueprintType)
enum class EMercunaObstacleMovementType : uint8 {
    ThreeDimensional,
    Character,
    Vehicle,
    None,
};

