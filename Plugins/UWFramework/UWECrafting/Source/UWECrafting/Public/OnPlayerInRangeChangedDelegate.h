#pragma once
#include "CoreMinimal.h"
#include "OnPlayerInRangeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInRangeChanged, bool, Value);

