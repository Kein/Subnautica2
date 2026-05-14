#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedActorTickerBase.h"
#include "ASN2AggregatedOxygenBubbleTicker.generated.h"

class ASN2OxygenBubble;

UCLASS()
class SUBNAUTICA2_API AASN2AggregatedOxygenBubbleTicker : public AUWEAggregatedActorTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<ASN2OxygenBubble*> Actors;
    
    UPROPERTY()
    TSet<ASN2OxygenBubble*> UnTickedActors;
    
    UPROPERTY()
    TSet<ASN2OxygenBubble*> ActorsToTick;
    
public:
    AASN2AggregatedOxygenBubbleTicker(const FObjectInitializer& ObjectInitializer);

};

