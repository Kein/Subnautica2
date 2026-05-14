#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTAttachmentSlotOperation_DetachmentSource.generated.h"

UENUM(BlueprintType)
enum class EUWEBTTAttachmentSlotOperation_DetachmentSource : uint8 {
    None,
    DetachFromAttachmentOwnerSlot,
    DetachPawn,
};

