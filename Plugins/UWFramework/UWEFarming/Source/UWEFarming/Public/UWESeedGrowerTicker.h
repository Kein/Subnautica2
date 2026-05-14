#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedComponentTickerBase.h"
#include "UWESeedGrowerTicker.generated.h"

class UUWESeedGrowerComponent;

UCLASS()
class UWEFARMING_API AUWESeedGrowerTicker : public AUWEAggregatedComponentTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TSet<UUWESeedGrowerComponent*> Components;
    
public:
    AUWESeedGrowerTicker(const FObjectInitializer& ObjectInitializer);

};

