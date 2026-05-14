#pragma once
#include "CoreMinimal.h"
#include "UWEWorldPopSpatialCell.h"
#include "UWEWorldPopSpatialLayer.generated.h"

USTRUCT(BlueprintType)
struct FUWEWorldPopSpatialLayer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int64, FUWEWorldPopSpatialCell> CellMap;
    
    UWEWORLDPOPULATION2_API FUWEWorldPopSpatialLayer();
};

