#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedTickerBase.h"
#include "UWEAggregatedActorTickerBase.generated.h"

UCLASS()
class UWETICKAGGREGATION_API AUWEAggregatedActorTickerBase : public AUWEAggregatedTickerBase {
    GENERATED_BODY()
public:
    AUWEAggregatedActorTickerBase(const FObjectInitializer& ObjectInitializer);

};

