#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedTickerBase.h"
#include "UWEAggregatedComponentTickerBase.generated.h"

UCLASS()
class UWETICKAGGREGATION_API AUWEAggregatedComponentTickerBase : public AUWEAggregatedTickerBase {
    GENERATED_BODY()
public:
    AUWEAggregatedComponentTickerBase(const FObjectInitializer& ObjectInitializer);

};

