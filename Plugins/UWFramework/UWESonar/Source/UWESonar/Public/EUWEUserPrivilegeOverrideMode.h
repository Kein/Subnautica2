#pragma once
#include "CoreMinimal.h"
#include "EUWEUserPrivilegeOverrideMode.generated.h"

UENUM(BlueprintType)
enum class EUWEUserPrivilegeOverrideMode : uint8 {
    Default,
    Allow,
    Deny,
};

