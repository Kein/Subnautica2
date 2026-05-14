#pragma once
#include "CoreMinimal.h"
#include "FTagChange.generated.h"

UENUM(BlueprintType)
enum class FTagChange : uint8 {
    Add,
    Remove,
};

