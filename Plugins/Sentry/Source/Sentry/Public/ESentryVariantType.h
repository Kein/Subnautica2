#pragma once
#include "CoreMinimal.h"
#include "ESentryVariantType.generated.h"

UENUM(BlueprintType)
enum class ESentryVariantType : uint8 {
    Empty,
    Integer,
    Float,
    Bool,
    String,
    Array,
    Map,
};

