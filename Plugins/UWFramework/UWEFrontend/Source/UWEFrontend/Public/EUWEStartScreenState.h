#pragma once
#include "CoreMinimal.h"
#include "EUWEStartScreenState.generated.h"

UENUM(BlueprintType)
enum class EUWEStartScreenState : uint8 {
    None,
    HealthWarning,
    Logos,
    TermsOfService,
    Gamma,
    PressStart,
    Complete,
};

