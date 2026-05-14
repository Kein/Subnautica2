#pragma once
#include "CoreMinimal.h"
#include "EGPPLogLevel.generated.h"

UENUM(BlueprintType)
enum class EGPPLogLevel : uint8 {
    NoLogging,
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
    All,
};

