#pragma once
#include "CoreMinimal.h"
#include "UWEAccessibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEAccessibilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableFlashingLights;
    
    UWEGAMECONFIGURATION_API FUWEAccessibilitySettings();
};

