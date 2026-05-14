#pragma once
#include "CoreMinimal.h"
#include "EUWEEffectActivationThreshold.generated.h"

UENUM(BlueprintType)
enum class EUWEEffectActivationThreshold : uint8 {
    None,
    GreaterThan,
    LessOrEqualThan,
    EqualTo,
};

