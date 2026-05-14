#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTMoveToTraceCheckType.generated.h"

UENUM(BlueprintType)
enum class EUWEBTTMoveToTraceCheckType : uint8 {
    FirstBlockingHit,
    AllBlockingHits,
};

