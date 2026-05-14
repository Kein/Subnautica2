#pragma once
#include "CoreMinimal.h"
#include "UWEBiomodSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEBiomodSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bEnableNoCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnlockAllBioAbilities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnlockAdaptations;
    
    UWEGAMECONFIGURATION_API FUWEBiomodSettings();
};

