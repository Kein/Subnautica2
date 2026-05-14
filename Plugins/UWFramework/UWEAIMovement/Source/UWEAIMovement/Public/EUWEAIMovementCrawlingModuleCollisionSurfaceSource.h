#pragma once
#include "CoreMinimal.h"
#include "EUWEAIMovementCrawlingModuleCollisionSurfaceSource.generated.h"

UENUM(BlueprintType)
enum class EUWEAIMovementCrawlingModuleCollisionSurfaceSource : uint8 {
    Automatic,
    MarkedSurface,
    PathfindingNavigationRelevantSurface,
};

