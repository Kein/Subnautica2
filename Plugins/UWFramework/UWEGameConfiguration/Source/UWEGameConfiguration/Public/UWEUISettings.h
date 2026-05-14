#pragma once
#include "CoreMinimal.h"
#include "UWEUISettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDepthGuageAlwaysOn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCompassAlwaysOn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideSurvivalGuages;
    
    UWEGAMECONFIGURATION_API FUWEUISettings();
};

