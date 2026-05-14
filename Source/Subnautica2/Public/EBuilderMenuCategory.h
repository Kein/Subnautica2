#pragma once
#include "CoreMinimal.h"
#include "EBuilderMenuCategory.generated.h"

UENUM(BlueprintType)
enum class EBuilderMenuCategory : uint8 {
    Sculpt,
    BaseObject,
    WorldObject,
    Interior,
    PredefinedLocationOnly,
    Count,
};

