#pragma once
#include "CoreMinimal.h"
#include "UWEAggregatedComponentTickerBase.h"
#include "UWEPlantGrowerTicker.generated.h"

class UUWEPlantGrowerComponent;

UCLASS()
class UWEFARMING_API AUWEPlantGrowerTicker : public AUWEAggregatedComponentTickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TSet<UUWEPlantGrowerComponent*> Components;
    
public:
    AUWEPlantGrowerTicker(const FObjectInitializer& ObjectInitializer);

};

