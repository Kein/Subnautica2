#pragma once
#include "CoreMinimal.h"
#include "EUWENotificationType.generated.h"

UENUM(BlueprintType)
enum class EUWENotificationType : uint8 {
    Generic,
    Tutorial,
    ScanProgress,
    RecipeUnlock,
    DatabankUnlock,
    Info,
    Warning,
    Error,
    CriticalError,
    Adapted,
    InvestigationComplete,
};

