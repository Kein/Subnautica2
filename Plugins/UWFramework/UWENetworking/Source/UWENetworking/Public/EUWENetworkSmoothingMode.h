#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkSmoothingMode.generated.h"

UENUM(BlueprintType)
enum class EUWENetworkSmoothingMode : uint8 {
    Disabled,
    Exponential,
};

