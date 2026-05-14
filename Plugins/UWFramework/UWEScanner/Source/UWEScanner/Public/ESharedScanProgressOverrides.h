#pragma once
#include "CoreMinimal.h"
#include "ESharedScanProgressOverrides.generated.h"

UENUM(BlueprintType)
enum class ESharedScanProgressOverrides : uint8 {
    UseDefaults,
    ForceOn,
    ForceOff,
};

