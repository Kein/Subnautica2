#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEWorldPopSpatialLayer.h"
#include "UWESpatialDataStorageDataAsset.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWESpatialDataStorageDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FUWEWorldPopSpatialLayer> SpatialLayers;
    
    UUWESpatialDataStorageDataAsset();

};

