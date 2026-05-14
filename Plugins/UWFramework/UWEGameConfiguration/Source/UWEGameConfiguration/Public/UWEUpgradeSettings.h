#pragma once
#include "CoreMinimal.h"
#include "UWEUpgradeSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEUpgradeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseToolbarSlotCountIncrease;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseInventorySlotCountIncrease;
    
    UWEGAMECONFIGURATION_API FUWEUpgradeSettings();
};

