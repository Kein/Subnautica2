#pragma once
#include "CoreMinimal.h"
#include "ESettingsTab.generated.h"

UENUM(BlueprintType)
enum class ESettingsTab : uint8 {
    Graphics,
    Sound,
    Controls,
    Language,
    Accessibility,
    DebugInfo,
};

