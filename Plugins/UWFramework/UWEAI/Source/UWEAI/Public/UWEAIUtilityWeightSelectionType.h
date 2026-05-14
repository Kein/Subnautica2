#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityWeightSelectionType.generated.h"

UENUM(BlueprintType)
enum class UWEAIUtilityWeightSelectionType : uint8 {
    WeightedRandom,
    Highest,
};

