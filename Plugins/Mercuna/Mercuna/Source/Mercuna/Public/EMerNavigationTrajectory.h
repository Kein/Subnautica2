#pragma once
#include "CoreMinimal.h"
#include "EMerNavigationTrajectory.generated.h"

UENUM(BlueprintType)
enum class EMerNavigationTrajectory : uint8 {
    Trajectory,
    Avoiding,
    NavLink,
    None,
};

