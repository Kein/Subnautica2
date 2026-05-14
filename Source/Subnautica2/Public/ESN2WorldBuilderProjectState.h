#pragma once
#include "CoreMinimal.h"
#include "ESN2WorldBuilderProjectState.generated.h"

UENUM(BlueprintType)
enum class ESN2WorldBuilderProjectState : uint8 {
    WaitingForBioScan,
    BioScanCompleted,
    GhostCreated,
    Completed,
};

