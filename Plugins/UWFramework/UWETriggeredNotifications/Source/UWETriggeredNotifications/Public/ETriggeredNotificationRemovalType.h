#pragma once
#include "CoreMinimal.h"
#include "ETriggeredNotificationRemovalType.generated.h"

UENUM(BlueprintType)
enum class ETriggeredNotificationRemovalType : uint8 {
    Manual,
    EventTracker,
    StoryGoal,
    Duration,
};

