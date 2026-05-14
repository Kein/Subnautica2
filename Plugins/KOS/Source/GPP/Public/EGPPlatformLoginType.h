#pragma once
#include "CoreMinimal.h"
#include "EGPPlatformLoginType.generated.h"

UENUM(BlueprintType)
enum class EGPPlatformLoginType : uint8 {
    None,
    steam,
    ps4,
    ps5,
    live,
    google,
    facebook,
    apple,
    epicgames,
    krafton,
    discord,
    guest,
    device,
};

