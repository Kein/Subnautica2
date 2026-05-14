#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedActorTickerBase.h"
#include "UWEAggregatedActorTicker.generated.h"

class AActor;

UCLASS()
class UWETICKAGGREGATION_API AUWEAggregatedActorTicker : public AUWEAggregatedActorTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<AActor*> Actors;
    
public:
    AUWEAggregatedActorTicker(const FObjectInitializer& ObjectInitializer);

};

