#pragma once
#include "CoreMinimal.h"
#include "EUWEInputPromptTargetNameSource.generated.h"

UENUM(BlueprintType)
enum class EUWEInputPromptTargetNameSource : uint8 {
    HoverTarget,
    SourceObject,
    AvatarActor,
};

