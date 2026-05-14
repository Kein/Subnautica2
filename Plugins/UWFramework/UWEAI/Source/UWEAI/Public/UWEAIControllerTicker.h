#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedActorTickerBase.h"
#include "UWEAIControllerTicker.generated.h"

class AUWEAIController;

UCLASS()
class UWEAI_API AUWEAIControllerTicker : public AUWEAggregatedActorTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSet<AUWEAIController*> Actors;
    
    UPROPERTY()
    TSet<AUWEAIController*> ActorsLeftOver;
    
public:
    AUWEAIControllerTicker(const FObjectInitializer& ObjectInitializer);

};

