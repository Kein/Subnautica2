#pragma once
#include "CoreMinimal.h"
#include "UWEInventoryItem.h"
#include "OnItemAttributeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAttributeChanged, const FUWEInventoryItem&, InventoryItem);

