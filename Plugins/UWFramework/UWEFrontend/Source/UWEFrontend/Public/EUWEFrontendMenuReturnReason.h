#pragma once
#include "CoreMinimal.h"
#include "EUWEFrontendMenuReturnReason.generated.h"

UENUM(BlueprintType)
enum class EUWEFrontendMenuReturnReason : uint8 {
    None,
    LostPrivilege,
    Disconnected,
    Kicked,
    Quit,
};

