#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ConsumableInfo.generated.h"

USTRUCT(BlueprintType)
struct FConsumableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadOnly)
    float Value;
    
    SUBNAUTICA2_API FConsumableInfo();
};

