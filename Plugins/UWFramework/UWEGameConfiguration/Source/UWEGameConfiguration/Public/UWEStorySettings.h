#pragma once
#include "CoreMinimal.h"
#include "UWEStorySettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEStorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUnlockAllDatabankEntries;
    
    UWEGAMECONFIGURATION_API FUWEStorySettings();
};

