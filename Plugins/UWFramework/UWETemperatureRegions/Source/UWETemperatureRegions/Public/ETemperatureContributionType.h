#pragma once
#include "CoreMinimal.h"
#include "ETemperatureContributionType.generated.h"

UENUM(BlueprintType)
enum class ETemperatureContributionType : uint8 {
    Additive,
    Set,
};

