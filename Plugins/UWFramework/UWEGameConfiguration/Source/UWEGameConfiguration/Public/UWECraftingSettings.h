#pragma once
#include "CoreMinimal.h"
#include "UWECraftingSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWECraftingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableNoCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnlockAllRecipes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CraftingSpeedMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool QuickProccessing;
    
    UWEGAMECONFIGURATION_API FUWECraftingSettings();
};

