#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityFactorCooldownType.generated.h"

UENUM(BlueprintType)
enum class UWEAIUtilityFactorCooldownType : uint8 {
    Always,
    Succeeded,
    Aborted,
};

