#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurrencyData.generated.h"

USTRUCT(BlueprintType)
struct UWEINGAMECURRENCY_API FCurrencyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag CurrencyTag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentAmount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TotalAmount;
    
    FCurrencyData();
};

