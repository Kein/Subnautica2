#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavLinkTraversalType.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavLinkTraversalType : uint8 {
    OneWay,
    Bidirectional,
};

