#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurrencyData.h"
#include "OnCurrencyChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnCurrencyChanged, FGameplayTag, CurrencyTag, FCurrencyData, OldData, FCurrencyData, NewData);

