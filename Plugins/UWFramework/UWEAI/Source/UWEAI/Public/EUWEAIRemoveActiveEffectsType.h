#pragma once
#include "CoreMinimal.h"
#include "EUWEAIRemoveActiveEffectsType.generated.h"

UENUM(BlueprintType)
enum class EUWEAIRemoveActiveEffectsType : uint8 {
    WithTags,
    WithSourceTags,
    WithAppliedTags,
    WithGrantedTags,
};

