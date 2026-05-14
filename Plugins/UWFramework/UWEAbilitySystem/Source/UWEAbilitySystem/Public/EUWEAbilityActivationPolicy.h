#pragma once
#include "CoreMinimal.h"
#include "EUWEAbilityActivationPolicy.generated.h"

UENUM(BlueprintType)
enum class EUWEAbilityActivationPolicy : uint8 {
    OnInputTriggered,
    WhileInputActive,
    OnSpawn,
    WhilePossessed,
    None,
};

