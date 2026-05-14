#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPurchaseMadeDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnPurchaseMade, FGameplayTag, CurrencyTag, TSoftObjectPtr<UObject>, Purchase, int32, Cost);

