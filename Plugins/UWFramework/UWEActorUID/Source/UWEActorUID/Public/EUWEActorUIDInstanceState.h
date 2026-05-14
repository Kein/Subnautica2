#pragma once
#include "CoreMinimal.h"
#include "EUWEActorUIDInstanceState.generated.h"

UENUM(BlueprintType)
enum class EUWEActorUIDInstanceState : uint8 {
    Invalid,
    Unloaded,
    Valid,
};

