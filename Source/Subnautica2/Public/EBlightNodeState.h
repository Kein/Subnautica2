#pragma once
#include "CoreMinimal.h"
#include "EBlightNodeState.generated.h"

UENUM(BlueprintType)
enum class EBlightNodeState : uint8 {
    Dormant,
    Active,
    Remediated,
};

