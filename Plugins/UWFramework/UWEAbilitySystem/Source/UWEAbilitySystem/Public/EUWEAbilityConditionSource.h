#pragma once
#include "CoreMinimal.h"
#include "EUWEAbilityConditionSource.generated.h"

UENUM(BlueprintType)
enum class EUWEAbilityConditionSource : uint8 {
    HoverTarget,
    SourceObject,
    AvatarActor,
};

