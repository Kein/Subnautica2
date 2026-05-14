#pragma once
#include "CoreMinimal.h"
#include "MerMoverMovementModeProducerIndexMap.generated.h"

USTRUCT(BlueprintType)
struct FMerMoverMovementModeProducerIndexMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> Map;
    
    MERCUNAMOVER_API FMerMoverMovementModeProducerIndexMap();
};

