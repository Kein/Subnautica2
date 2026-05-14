#pragma once
#include "CoreMinimal.h"
#include "EUWECellRotationShowMode.generated.h"

UENUM(BlueprintType)
enum class EUWECellRotationShowMode : uint8 {
    DoNotShow,
    Final,
    FacingDirection,
};

