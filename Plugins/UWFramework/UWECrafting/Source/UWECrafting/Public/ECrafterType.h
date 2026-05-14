#pragma once
#include "CoreMinimal.h"
#include "ECrafterType.generated.h"

UENUM(BlueprintType)
enum class ECrafterType : uint8 {
    Undefined,
    Fabricator,
    BuilderTool,
    Refinery,
    VehicleFabricator,
    ModificationStation,
};

