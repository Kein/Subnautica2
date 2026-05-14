#pragma once
#include "CoreMinimal.h"
#include "ECraftingResults.generated.h"

UENUM(BlueprintType)
enum class ECraftingResults : uint8 {
    Failed,
    SuccessInventory,
    SuccessNoInventory,
};

