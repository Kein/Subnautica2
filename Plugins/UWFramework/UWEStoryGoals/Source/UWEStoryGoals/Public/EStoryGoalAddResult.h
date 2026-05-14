#pragma once
#include "CoreMinimal.h"
#include "EStoryGoalAddResult.generated.h"

UENUM(BlueprintType)
enum class EStoryGoalAddResult : uint8 {
    Added,
    Rejected_AlreadyPresent,
    Rejected_IncompatibleOwner,
    Rejected_RequirementsUnsatisfied,
    Rejected_InvalidGoal,
    Rejected_InvalidCall,
};

