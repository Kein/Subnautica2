#pragma once
#include "CoreMinimal.h"
#include "EUWESaveGameConvertResult.generated.h"

UENUM(BlueprintType)
enum class EUWESaveGameConvertResult : uint8 {
    Failed_UnableToGetExternalId,
    Failed_PlayerDataNotCloned,
    Failed,
    Succeeded,
};

