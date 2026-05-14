#pragma once
#include "CoreMinimal.h"
#include "EUserConsent.generated.h"

UENUM(BlueprintType)
enum class EUserConsent : uint8 {
    Revoked,
    Given,
    Unknown,
};

