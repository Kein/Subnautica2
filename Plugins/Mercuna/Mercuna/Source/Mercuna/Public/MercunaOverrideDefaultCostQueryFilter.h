#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigation2DQueryFilter.h"
#include "MercunaOverrideDefaultCostQueryFilter.generated.h"

USTRUCT()
struct FMercunaOverrideDefaultCostQueryFilter : public FMercunaNavigation2DQueryFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultCostMultiplierOverride;
    
    MERCUNA_API FMercunaOverrideDefaultCostQueryFilter();
};

