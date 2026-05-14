#pragma once
#include "CoreMinimal.h"
#include "EUWEVideoToursSubsystemState.generated.h"

UENUM(BlueprintType)
enum class EUWEVideoToursSubsystemState : uint8 {
    Idle,
    Playing,
    Recording,
};

