#pragma once
#include "CoreMinimal.h"
#include "EUWEAbilityActivationGroup.generated.h"

UENUM(BlueprintType)
enum class EUWEAbilityActivationGroup : uint8 {
    Independent,
    Exclusive_Replaceable,
    Exclusive_Blocking,
    MAX,
};

