#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnPurchaseMadeMulticastDelegate.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPurchaseMadeMulticast, FGameplayTag, CurrencyTag, TSoftObjectPtr<UObject>, Purchase, int32, Cost);

