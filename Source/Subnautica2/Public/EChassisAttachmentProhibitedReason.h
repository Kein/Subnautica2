#pragma once
#include "CoreMinimal.h"
#include "EChassisAttachmentProhibitedReason.generated.h"

UENUM(BlueprintType)
enum class EChassisAttachmentProhibitedReason : uint8 {
    ChassisAlreadyAttached,
    OverlappingChassis,
    CarryableAttached,
    Num,
};

