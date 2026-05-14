#pragma once
#include "CoreMinimal.h"
#include "EMercunaPathPointType.generated.h"

UENUM(BlueprintType)
enum EMercunaPathPointType {
    PathPoint,
    ReversePathPoint,
    NavLink,
    End,
};

