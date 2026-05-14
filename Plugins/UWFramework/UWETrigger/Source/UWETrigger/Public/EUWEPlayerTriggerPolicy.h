#pragma once
#include "CoreMinimal.h"
#include "EUWEPlayerTriggerPolicy.generated.h"

UENUM(BlueprintType)
enum class EUWEPlayerTriggerPolicy : uint8 {
    Always,
    Once,
    OncePerPlayer,
};

