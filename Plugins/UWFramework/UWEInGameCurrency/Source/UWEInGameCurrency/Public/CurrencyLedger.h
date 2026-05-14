#pragma once
#include "CoreMinimal.h"
#include "CurrencyData.h"
#include "CurrencyTransaction.h"
#include "CurrencyLedger.generated.h"

USTRUCT(BlueprintType)
struct UWEINGAMECURRENCY_API FCurrencyLedger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FCurrencyData CurrencyData;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FCurrencyTransaction> Sources;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FCurrencyTransaction> Purchases;
    
    FCurrencyLedger();
};

