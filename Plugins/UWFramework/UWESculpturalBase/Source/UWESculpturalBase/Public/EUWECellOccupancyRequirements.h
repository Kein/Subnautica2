#pragma once
#include "CoreMinimal.h"
#include "EUWECellOccupancyRequirements.generated.h"

UENUM(BlueprintType)
enum class EUWECellOccupancyRequirements : uint8 {
    MustNotExist,
    MustExistCanBeOccupied,
    MustExistMustBeOccupied,
    MustExistMustNotBeOccupied,
    None,
};

