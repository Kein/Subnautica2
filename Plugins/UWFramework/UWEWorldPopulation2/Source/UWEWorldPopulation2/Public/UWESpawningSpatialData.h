#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UWEWorldPopSpatialLayer.h"
#include "UWESpawningSpatialData.generated.h"

UCLASS()
class UWEWORLDPOPULATION2_API UUWESpawningSpatialData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FUWEWorldPopSpatialLayer> SpatialLayers;
    
public:
    UUWESpawningSpatialData();

};

