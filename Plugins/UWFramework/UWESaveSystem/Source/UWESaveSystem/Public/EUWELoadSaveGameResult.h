#pragma once
#include "CoreMinimal.h"
#include "EUWELoadSaveGameResult.generated.h"

UENUM(BlueprintType)
enum class EUWELoadSaveGameResult : uint8 {
    Invalid_NotSet,
    Invalid_FileFormatObsolete,
    Invalid_FileFormatUnsupported,
    Invalid_ContentsUnloadableByLoadMethod,
    Invalid_ContentsNotExpectedSize,
    Invalid,
    Success,
};

