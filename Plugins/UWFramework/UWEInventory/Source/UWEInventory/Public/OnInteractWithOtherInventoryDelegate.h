#pragma once
#include "CoreMinimal.h"
#include "OnInteractWithOtherInventoryDelegate.generated.h"

class UUWEInventoryComponent;
class UUWEInventoryInteractionComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractWithOtherInventory, UUWEInventoryComponent*, OtherInventoryComp, UUWEInventoryInteractionComponent*, InventoryInteraction);

