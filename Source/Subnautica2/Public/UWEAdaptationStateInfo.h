#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerAdaptation.h"
#include "UWEAdaptationStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEAdaptationStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FUWEPlayerAdaptation Adaptation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDescriptionVisible;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPlayerHasAdaptation;
    
    SUBNAUTICA2_API FUWEAdaptationStateInfo();
};

