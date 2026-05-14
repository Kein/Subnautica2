#pragma once
#include "CoreMinimal.h"
#include "EUWEBuilderRemovalMode.generated.h"

UENUM(BlueprintType)
enum class EUWEBuilderRemovalMode : uint8 {
    None,
    Creature,
    Prop,
};

