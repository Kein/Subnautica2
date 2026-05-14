#pragma once
#include "CoreMinimal.h"
#include "EGPPDeviceType.generated.h"

UENUM(BlueprintType)
enum class EGPPDeviceType : uint8 {
    None,
    AOS,
    IOS,
    PS4,
    PS5,
    XBoxSeries,
    XB1,
    Windows,
    Mac,
    WinGDK,
};

