#pragma once
#include "CoreMinimal.h"
#include "UWEScanningSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEScanningSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnlockAllScanningFilters;
    
    UWEGAMECONFIGURATION_API FUWEScanningSettings();
};

