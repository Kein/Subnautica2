#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItem.h"
#include "OnItemRemovedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRemoved, const FUWEInventoryItem&, InventoryItem);

