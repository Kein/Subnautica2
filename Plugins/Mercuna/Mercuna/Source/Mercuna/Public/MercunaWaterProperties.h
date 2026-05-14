#pragma once
#include "CoreMinimal.h"
#include "EMercunaDeepWaterMode.h"
#include "MercunaWaterProperties.generated.h"

USTRUCT()
struct MERCUNA_API FMercunaWaterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinimumShallowWaterDepth;
    
    UPROPERTY(EditAnywhere)
    float MinimumDeepWaterDepth;
    
    UPROPERTY(EditAnywhere)
    EMercunaDeepWaterMode DeepWaterMode;
    
    UPROPERTY(EditAnywhere)
    float ShallowWaterCostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DeepWaterCostMultiplier;
    
    FMercunaWaterProperties();
};

