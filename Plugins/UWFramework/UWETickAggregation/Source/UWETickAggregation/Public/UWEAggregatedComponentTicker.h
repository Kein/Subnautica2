#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedComponentTickerBase.h"
#include "UWEAggregatedComponentTicker.generated.h"

class UActorComponent;

UCLASS()
class UWETICKAGGREGATION_API AUWEAggregatedComponentTicker : public AUWEAggregatedComponentTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TSet<UActorComponent*> Components;
    
    UPROPERTY(Export)
    TSet<UActorComponent*> ComponentsRemovedDuringTicking;
    
public:
    AUWEAggregatedComponentTicker(const FObjectInitializer& ObjectInitializer);

};

