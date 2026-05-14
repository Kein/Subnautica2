#pragma once
#include "CoreMinimal.h"
#include "ERecipeState.generated.h"

UENUM(BlueprintType)
enum class ERecipeState : uint8 {
    Locked,
    Unlocked,
};

