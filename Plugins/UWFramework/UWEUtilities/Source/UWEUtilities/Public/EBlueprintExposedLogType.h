#pragma once
#include "CoreMinimal.h"
#include "EBlueprintExposedLogType.generated.h"

UENUM(BlueprintType)
enum class EBlueprintExposedLogType : uint8 {
    Fatal,
    Error,
    Warning,
    Display,
    Log,
    Verbose,
    VeryVerbose,
};

