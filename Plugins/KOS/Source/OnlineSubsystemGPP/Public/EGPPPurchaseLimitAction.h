#pragma once
#include "CoreMinimal.h"
#include "EGPPPurchaseLimitAction.generated.h"

UENUM(BlueprintType)
enum class EGPPPurchaseLimitAction : uint8 {
    UPDATE_IAP_USER_PROPERTY,
    CLOSE,
    UNKNOWN,
};

