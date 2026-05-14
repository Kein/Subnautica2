#pragma once
#include "CoreMinimal.h"
#include "EUWEPlayerCustomizationPartType.generated.h"

UENUM(BlueprintType)
enum class EUWEPlayerCustomizationPartType : uint8 {
    None,
    Hair,
    Head,
    Collar,
    Body,
    Hands,
    Feet,
    SuitColor,
    MAX,
};

