#pragma once
#include "CoreMinimal.h"
#include "FNewsfeedListStatus.generated.h"

UENUM(BlueprintType)
enum class FNewsfeedListStatus : uint8 {
    Uninitialized,
    Loading,
    Success,
    Failed,
};

