#pragma once
#include "CoreMinimal.h"
#include "EUWEGameplayCueTagQueryCheck_Target.generated.h"

UENUM(BlueprintType)
enum class EUWEGameplayCueTagQueryCheck_Target : uint8 {
    None,
    Target,
    Instigator,
    EffectCauser,
};

