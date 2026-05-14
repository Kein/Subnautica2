#pragma once
#include "CoreMinimal.h"
#include "ESonarEntitlementStatus.generated.h"

UENUM(BlueprintType)
enum class ESonarEntitlementStatus : uint8 {
    CLAIMED,
    FULFILLED,
};

