#pragma once
#include "CoreMinimal.h"
#include "UWEAIWorldOrPlayerNotifyType.generated.h"

UENUM(BlueprintType)
enum class UWEAIWorldOrPlayerNotifyType : uint8 {
    World,
    Player,
};

