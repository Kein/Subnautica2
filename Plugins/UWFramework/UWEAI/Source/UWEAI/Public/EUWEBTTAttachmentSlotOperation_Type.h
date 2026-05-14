#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTAttachmentSlotOperation_Type.generated.h"

UENUM(BlueprintType)
enum class EUWEBTTAttachmentSlotOperation_Type : uint8 {
    None,
    Attach,
    Detach,
};

