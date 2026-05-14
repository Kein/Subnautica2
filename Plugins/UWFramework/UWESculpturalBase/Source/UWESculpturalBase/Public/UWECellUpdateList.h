#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWECellUpdateList.generated.h"

USTRUCT(BlueprintType)
struct FUWECellUpdateList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FIntVector> DirtyCells;
    
    UPROPERTY()
    TSet<FIntVector> ModifiedCells;
    
    UPROPERTY()
    TSet<FIntVector> AddedCells;
    
    UPROPERTY()
    TSet<FIntVector> RemovedCells;
    
    UPROPERTY()
    bool DisconnectedStructure;
    
    UWESCULPTURALBASE_API FUWECellUpdateList();
};

