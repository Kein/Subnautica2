#pragma once
#include "CoreMinimal.h"
#include "EBiomeRegionType.generated.h"

UENUM(BlueprintType)
enum class EBiomeRegionType : uint8 {
    BRT_Water,
    BRT_MaskedWater,
    BRT_Air,
};

