#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SN2SolarPanelBase.generated.h"

UCLASS()
class SUBNAUTICA2_API ASN2SolarPanelBase : public AActor {
    GENERATED_BODY()
public:
    ASN2SolarPanelBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void BPAggregatedTick(float DeltaSeconds);
    
};

