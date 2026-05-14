#pragma once
#include "CoreMinimal.h"
#include "EGPPEntitlementType.generated.h"

UENUM(BlueprintType)
enum class EGPPEntitlementType : uint8 {
    None,
    Durable,
    Consumable,
};

