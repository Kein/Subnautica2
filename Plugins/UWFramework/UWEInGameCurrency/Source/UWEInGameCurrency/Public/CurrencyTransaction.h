#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECurrencyTransactionType.h"
#include "CurrencyTransaction.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct UWEINGAMECURRENCY_API FCurrencyTransaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FGameplayTag CurrencyTag;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TSoftObjectPtr<UObject> Source;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    int32 Amount;
    
    UPROPERTY(SaveGame)
    ECurrencyTransactionType TransactionType;
    
    FCurrencyTransaction();
};

