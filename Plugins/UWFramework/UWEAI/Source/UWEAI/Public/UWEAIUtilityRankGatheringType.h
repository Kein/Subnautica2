#pragma once
#include "CoreMinimal.h"
#include "UWEAIUtilityRankGatheringType.generated.h"

UENUM(BlueprintType)
enum class UWEAIUtilityRankGatheringType : uint8 {
    RankBuckets,
    BakedLeftToRight,
};

