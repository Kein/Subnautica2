#pragma once
#include "CoreMinimal.h"
#include "OnOwnerInventoryFullChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOwnerInventoryFullChanged, bool, Value);

