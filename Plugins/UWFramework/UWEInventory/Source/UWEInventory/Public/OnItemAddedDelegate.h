#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItem.h"
#include "OnItemAddedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAdded, const FUWEInventoryItem&, InventoryItem);

