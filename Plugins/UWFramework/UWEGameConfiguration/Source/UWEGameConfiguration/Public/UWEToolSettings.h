#pragma once
#include "CoreMinimal.h"
#include "UWEToolSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEToolSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableUnlimitedBattery;
    
    UWEGAMECONFIGURATION_API FUWEToolSettings();
};

