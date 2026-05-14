#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWESpatialOctreeCell.generated.h"

USTRUCT(BlueprintType)
struct FUWESpatialOctreeCell {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FBox Bounds;
    
    UPROPERTY(SaveGame)
    TArray<int32> Children;
    
    UPROPERTY(SaveGame)
    TArray<int32> Data;
    
    UWEWORLDPOPULATION2_API FUWESpatialOctreeCell();
};

