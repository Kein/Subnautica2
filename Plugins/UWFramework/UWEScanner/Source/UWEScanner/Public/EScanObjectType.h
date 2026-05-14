#pragma once
#include "CoreMinimal.h"
#include "EScanObjectType.generated.h"

UENUM(BlueprintType)
enum class EScanObjectType : uint8 {
    Organic,
    Tech,
    Inorganic,
};

