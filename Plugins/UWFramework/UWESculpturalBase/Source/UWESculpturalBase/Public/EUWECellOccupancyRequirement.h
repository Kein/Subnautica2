#pragma once
#include "CoreMinimal.h"
#include "EUWECellOccupancyRequirement.generated.h"

UENUM(BlueprintType)
enum class EUWECellOccupancyRequirement : uint8 {
    Empty,
    Occupied,
    Any,
};

