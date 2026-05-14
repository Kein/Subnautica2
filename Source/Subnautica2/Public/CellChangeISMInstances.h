#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CellChangeISMInstances.generated.h"

USTRUCT(BlueprintType)
struct FCellChangeISMInstances {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTransform> Instances;
    
    SUBNAUTICA2_API FCellChangeISMInstances();
};

