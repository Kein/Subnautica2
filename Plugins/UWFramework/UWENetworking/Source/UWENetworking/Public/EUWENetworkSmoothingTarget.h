#pragma once
#include "CoreMinimal.h"
#include "EUWENetworkSmoothingTarget.generated.h"

UENUM(BlueprintType)
enum class EUWENetworkSmoothingTarget : uint8 {
    ChildComponent,
    RootComponent,
};

