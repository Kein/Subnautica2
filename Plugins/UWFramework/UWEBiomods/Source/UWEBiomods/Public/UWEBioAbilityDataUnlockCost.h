#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEBioAbilityDataUnlockCost.generated.h"

USTRUCT(BlueprintType)
struct FUWEBioAbilityDataUnlockCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag CurrencyTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CurrencyCost;
    
    UWEBIOMODS_API FUWEBioAbilityDataUnlockCost();
};

