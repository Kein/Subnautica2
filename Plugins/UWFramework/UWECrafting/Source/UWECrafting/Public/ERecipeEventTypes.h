#pragma once
#include "CoreMinimal.h"
#include "ERecipeEventTypes.generated.h"

UENUM(BlueprintType)
enum class ERecipeEventTypes : uint8 {
    OnPickup,
    OnFirstScan = 5,
    OnFullScan = 10,
    OnRecipeUnlocked = 15,
    OnDataCardCollected = 20,
    OnEntitlement = 25,
    Custom = 255,
};

