#pragma once
#include "CoreMinimal.h"
#include "MercunaMoverMovementModeProducer.h"
#include "MerMoverDefaultMovementSetProducerFlying.generated.h"

class UCommonLegacyMovementSettings;

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class MERCUNAMOVER_API UMerMoverDefaultMovementSetProducerFlying : public UMercunaMoverMovementModeProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAccelerationForPaths;
    
protected:
    UPROPERTY()
    UCommonLegacyMovementSettings* MovementSettings;
    
public:
    UMerMoverDefaultMovementSetProducerFlying();

};

