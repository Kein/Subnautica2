#pragma once
#include "CoreMinimal.h"
#include "EUWECellOccupancyOverride.generated.h"

UENUM(BlueprintType)
enum EUWECellOccupancyOverride {
    NotOverridden,
    Overridden_Unoccupied,
    Overridden_Occupied,
};

