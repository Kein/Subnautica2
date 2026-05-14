#pragma once
#include "CoreMinimal.h"
#include "EUWEEffectParamSource.generated.h"

UENUM(BlueprintType)
enum class EUWEEffectParamSource : uint8 {
    Target,
    Instigator,
    EffectCauser,
    SourceObject,
    AttachTargetComponent,
    HoverTarget,
};

