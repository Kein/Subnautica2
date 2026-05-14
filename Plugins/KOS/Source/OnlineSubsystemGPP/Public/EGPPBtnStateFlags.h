#pragma once
#include "CoreMinimal.h"
#include "EGPPBtnStateFlags.generated.h"

UENUM(BlueprintType)
enum class EGPPBtnStateFlags : uint8 {
    None,
    Enabled,
    Disabled,
    Selected = 4,
    Enabled_Selected,
    Focused = 8,
    Enabled_Focused,
    Pressed = 16,
    Enabled_Pressed,
};

