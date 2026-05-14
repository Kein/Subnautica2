#pragma once
#include "CoreMinimal.h"
#include "UWEAISettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEAISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInvisibleToHostiles;
    
    UWEGAMECONFIGURATION_API FUWEAISettings();
};

