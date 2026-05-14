#pragma once
#include "CoreMinimal.h"
#include "TabsTypes.generated.h"

UENUM()
enum class TabsTypes : int32 {
    Info,
    Inventory,
    Components,
    Attributes,
    Abilities,
    Tags,
    Effects,
    ReplicatedProperties,
    Stimulus,
    COUNT,
};

