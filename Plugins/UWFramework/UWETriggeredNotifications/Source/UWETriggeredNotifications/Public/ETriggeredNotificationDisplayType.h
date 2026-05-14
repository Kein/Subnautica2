#pragma once
#include "CoreMinimal.h"
#include "ETriggeredNotificationDisplayType.generated.h"

UENUM(BlueprintType)
enum class ETriggeredNotificationDisplayType : uint8 {
    GameplayMessage,
    HUD,
    OverActor,
};

