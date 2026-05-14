#pragma once
#include "CoreMinimal.h"
#include "EUWESaveToBlobResult.generated.h"

UENUM(BlueprintType)
enum class EUWESaveToBlobResult : uint8 {
    Error_SaveGameInvalid,
    Error_BlobInvalid,
    Error_WriteToBlobFailed,
    Error,
    Success,
};

