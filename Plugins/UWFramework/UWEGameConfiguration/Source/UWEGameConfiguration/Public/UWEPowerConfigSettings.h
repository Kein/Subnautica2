#pragma once
#include "CoreMinimal.h"
#include "UWEPowerConfigSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEPowerConfigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableUnlimitedPower;
    
    UWEGAMECONFIGURATION_API FUWEPowerConfigSettings();
};

