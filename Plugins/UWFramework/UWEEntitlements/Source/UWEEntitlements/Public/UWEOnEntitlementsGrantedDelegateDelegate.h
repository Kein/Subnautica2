#pragma once
#include "CoreMinimal.h"
#include "UWEEntitlementReward.h"
#include "UWEOnEntitlementsGrantedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUWEOnEntitlementsGrantedDelegate, bool, bWasSuccessful, const TArray<FUWEEntitlementReward>&, Names);

