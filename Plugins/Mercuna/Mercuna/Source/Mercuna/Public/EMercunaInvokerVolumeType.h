#pragma once
#include "CoreMinimal.h"
#include "EMercunaInvokerVolumeType.generated.h"

UENUM(BlueprintType)
enum class EMercunaInvokerVolumeType : uint8 {
    Always,
    OnOverlap,
};

