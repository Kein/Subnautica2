#pragma once
#include "CoreMinimal.h"
#include "EUWESaveGameValidity.generated.h"

UENUM(BlueprintType)
enum class EUWESaveGameValidity : uint8 {
    Invalid_NotSet,
    Invalid_NeedsUpgrade,
    Invalid_VersionNewerThanSupported,
    Invalid_VersionObsolete,
    Invalid_Delete,
    Valid,
};

