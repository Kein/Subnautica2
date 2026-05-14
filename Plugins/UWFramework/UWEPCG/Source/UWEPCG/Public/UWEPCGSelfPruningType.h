#pragma once
#include "CoreMinimal.h"
#include "UWEPCGSelfPruningType.generated.h"

UENUM(BlueprintType)
enum UWEPCGSelfPruningType {
    LargeToSmall,
    SmallToLarge,
    AllEqual,
    None,
    RemoveDuplicates,
};

