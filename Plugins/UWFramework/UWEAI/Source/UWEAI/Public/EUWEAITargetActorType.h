#pragma once
#include "CoreMinimal.h"
#include "EUWEAITargetActorType.generated.h"

UENUM(BlueprintType)
enum class EUWEAITargetActorType : uint8 {
    Self,
    DecisionTarget,
    BlackboardKey,
};

