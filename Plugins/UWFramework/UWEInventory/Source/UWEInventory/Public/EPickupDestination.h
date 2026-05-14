#pragma once
#include "CoreMinimal.h"
#include "EPickupDestination.generated.h"

UENUM(BlueprintType)
enum class EPickupDestination : uint8 {
    Inventory,
    Unused,
    Equipment,
    CannotPickup,
    Toolbar = 10,
    ToolbarAndEquip,
    ToolbarAndAlwaysEquip,
    ToolbarAndAlwaysEquipIfNew,
};

