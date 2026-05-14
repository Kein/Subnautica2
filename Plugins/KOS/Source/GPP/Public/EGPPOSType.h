#pragma once
#include "CoreMinimal.h"
#include "EGPPOSType.generated.h"

UENUM(BlueprintType)
enum class EGPPOSType : uint8 {
    None,
    Android,
    IOS,
    Mac,
    Windows,
    Orbis,
    XBox,
    Switch,
};

