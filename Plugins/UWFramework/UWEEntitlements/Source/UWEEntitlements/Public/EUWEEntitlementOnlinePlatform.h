#pragma once
#include "CoreMinimal.h"
#include "EUWEEntitlementOnlinePlatform.generated.h"

UENUM(BlueprintType)
enum class EUWEEntitlementOnlinePlatform : uint8 {
    Epic,
    Xbox,
    PSN,
    Steam,
    Sonar,
    Twitch,
};

