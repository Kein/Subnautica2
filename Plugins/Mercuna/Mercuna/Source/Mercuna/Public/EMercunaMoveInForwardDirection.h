#pragma once
#include "CoreMinimal.h"
#include "EMercunaMoveInForwardDirection.generated.h"

UENUM(BlueprintType)
enum class EMercunaMoveInForwardDirection : uint8 {
    Always,
    Prefer,
    Independent,
};

