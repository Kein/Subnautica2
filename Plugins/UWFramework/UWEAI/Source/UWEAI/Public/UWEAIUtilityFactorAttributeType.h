#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityFactorAttributeType.generated.h"

UENUM(BlueprintType)
enum class UWEAIUtilityFactorAttributeType : uint8 {
    Hunger,
    Health,
    Temper,
    Stamina,
};

