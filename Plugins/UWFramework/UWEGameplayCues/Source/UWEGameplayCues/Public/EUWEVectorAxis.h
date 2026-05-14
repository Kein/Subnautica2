#pragma once
#include "CoreMinimal.h"
#include "EUWEVectorAxis.generated.h"

UENUM(BlueprintType)
enum class EUWEVectorAxis : uint8 {
    All,
    Upwards,
    Forwards,
    Sidewards,
    Horizontal,
    Vertical,
};

