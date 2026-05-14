#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementCrawlingModuleSurfaceAlignmentMode.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementCrawlingModuleSurfaceAlignmentMode : uint8 {
    Automatic,
    CollisionSurface,
    PathfindingSurface,
};

