#pragma once
#include "CoreMinimal.h"
#include "EAlertSeverity.generated.h"

UENUM(BlueprintType)
enum class EAlertSeverity : uint8 {
    Info,
    Warning,
    Severe,
};

