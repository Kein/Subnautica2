#pragma once
#include "CoreMinimal.h"
#include "ETriggeredNotificationTriggerType.generated.h"

UENUM(BlueprintType)
enum class ETriggeredNotificationTriggerType : uint8 {
    Manual,
    EventTracker,
    StoryGoal,
};

