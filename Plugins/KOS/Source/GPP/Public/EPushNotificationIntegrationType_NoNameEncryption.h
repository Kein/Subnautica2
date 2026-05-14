#pragma once
#include "CoreMinimal.h"
#include "EPushNotificationIntegrationType_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EPushNotificationIntegrationType_NoNameEncryption : uint8 {
    NONE,
    NIGHT_TIME_IN_APP_MARKETING_CONSENT,
    IN_APP_MARKETING_CONSENT,
};

