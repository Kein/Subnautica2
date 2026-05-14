#pragma once
#include "CoreMinimal.h"
#include "EForecastMode.generated.h"

UENUM(BlueprintType)
enum class EForecastMode : uint8 {
    Randomised,
    Sequential,
};

