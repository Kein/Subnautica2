#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTSmartObjectOperationType.generated.h"

UENUM(BlueprintType)
enum class EUWEBTTSmartObjectOperationType : uint8 {
    None,
    ClaimSlot,
    UseAndReleaseClaimedSlot,
    ReleaseClaimedSlot = 4,
};

