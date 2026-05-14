#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWESeededCreatureInfo.h"
#include "UWESeededResourceInfo.h"
#include "UWESpatialOctreeCell.h"
#include "UWESeededResourceSpatialData.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWESeededResourceSpatialData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    TArray<FUWESeededResourceInfo> ResourceData;
    
    UPROPERTY(SaveGame)
    TArray<FUWESeededCreatureInfo> CreatureData;
    
    UPROPERTY(SaveGame)
    TMap<FString, int32> NumberOfResourcesSeeded;
    
    UPROPERTY()
    TMap<FString, int32> NumberOfResourcesRemoved;
    
    UPROPERTY()
    TArray<FUWESpatialOctreeCell> ResourceCells;
    
    UPROPERTY()
    TArray<FUWESpatialOctreeCell> CreatureCells;
    
    UPROPERTY(SaveGame)
    double CellSize;
    
    UPROPERTY(SaveGame)
    int32 MaxPerCell;
    
public:
    UUWESeededResourceSpatialData();

};

