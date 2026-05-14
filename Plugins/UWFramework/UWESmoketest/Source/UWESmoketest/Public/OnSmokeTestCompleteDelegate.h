#pragma once
#include "CoreMinimal.h"
#include "OnSmokeTestCompleteDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSmokeTestComplete, bool, bSucceeded);

