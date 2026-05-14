#pragma once
#include "CoreMinimal.h"
#include "MerMoverComponentAdapterMovementModeProducerMap.generated.h"

class UMercunaMoverMovementModeProducer;

USTRUCT(BlueprintType)
struct FMerMoverComponentAdapterMovementModeProducerMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, UMercunaMoverMovementModeProducer*> Map;
    
    MERCUNAMOVER_API FMerMoverComponentAdapterMovementModeProducerMap();
};

