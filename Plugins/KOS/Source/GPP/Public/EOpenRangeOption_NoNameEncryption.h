#pragma once
#include "CoreMinimal.h"
#include "EOpenRangeOption_NoNameEncryption.generated.h"

UENUM(BlueprintType)
enum class EOpenRangeOption_NoNameEncryption : uint8 {
    PUBLIC,
    FRIENDS,
    PRIVATE,
};

