#pragma once
#include "CoreMinimal.h"
#include "EMerGridDebugDrawSubmode.generated.h"

UENUM(BlueprintType)
enum class EMerGridDebugDrawSubmode : uint8 {
    NAVIGABLE,
    SURFACE_TYPE,
    USAGE_TYPE,
    ORIENTATIONS,
    NAVLINKS,
    SURFACE_NORMALS,
    POLYGONS,
    CONNECTIONS,
    QUERY_COST,
    QUERY_HEURISTIC,
    QUERY_TOTAL,
    QUERY_DISTANCE_FIELD,
};

