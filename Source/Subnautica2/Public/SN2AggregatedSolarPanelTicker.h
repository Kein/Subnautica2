#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedActorTickerBase.h"
#include "SN2AggregatedSolarPanelTicker.generated.h"

class ASN2SolarPanelBase;

UCLASS()
class SUBNAUTICA2_API ASN2AggregatedSolarPanelTicker : public AUWEAggregatedActorTickerBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<ASN2SolarPanelBase*> Actors;
    
    UPROPERTY()
    TSet<ASN2SolarPanelBase*> UnTickedActors;
    
    ASN2AggregatedSolarPanelTicker(const FObjectInitializer& ObjectInitializer);

};

