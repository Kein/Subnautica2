#pragma once
#include "CoreMinimal.h"
#include "UWEAIGroupingCheckType.generated.h"

UENUM(BlueprintType)
enum class UWEAIGroupingCheckType : uint8 {
    IsLeader,
    HasLeader,
    InGroup,
    NotInGroup,
};

