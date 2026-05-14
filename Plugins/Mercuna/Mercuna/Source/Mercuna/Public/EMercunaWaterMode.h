#pragma once
#include "CoreMinimal.h"
#include "EMercunaWaterMode.generated.h"

UENUM(BlueprintType)
enum class EMercunaWaterMode : uint8 {
    Everywhere,
    ExcludeWater,
    WaterOnly,
};

