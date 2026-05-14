#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurrencyData.h"
#include "OnCurrencyChangedMulticastDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurrencyChangedMulticast, FGameplayTag, CurrencyTag, FCurrencyData, OldData, FCurrencyData, NewData);

