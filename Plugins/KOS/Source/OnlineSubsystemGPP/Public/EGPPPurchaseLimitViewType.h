#pragma once
#include "CoreMinimal.h"
#include "EGPPPurchaseLimitViewType.generated.h"

UENUM(BlueprintType)
enum class EGPPPurchaseLimitViewType : uint8 {
    ALERT,
    ACTION_SHEET_TYPE2,
    ACTION_SHEET_TYPE3,
    RADIO_CONFIRM_TYPE,
    UNKNOWN,
};

