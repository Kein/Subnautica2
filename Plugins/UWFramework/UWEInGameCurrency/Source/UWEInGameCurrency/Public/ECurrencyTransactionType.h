#pragma once
#include "CoreMinimal.h"
#include "ECurrencyTransactionType.generated.h"

UENUM(BlueprintType)
enum class ECurrencyTransactionType : uint8 {
    Undefined,
    Income,
    Purchase,
};

