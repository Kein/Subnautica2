#pragma once
#include "CoreMinimal.h"
#include "EUWECallFunctionContext.generated.h"

UENUM(BlueprintType)
enum class EUWECallFunctionContext : uint8 {
    Any,
    TriggeringClient,
    AnyClient,
    Server,
};

