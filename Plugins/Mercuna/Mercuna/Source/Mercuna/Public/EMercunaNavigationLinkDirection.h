#pragma once
#include "CoreMinimal.h"
#include "EMercunaNavigationLinkDirection.generated.h"

UENUM(BlueprintType)
enum class EMercunaNavigationLinkDirection : uint8 {
    BothWays,
    LeftToRight,
    RightToLeft,
};

