#pragma once
#include "CoreMinimal.h"
#include "MercunaUsageTypes.h"
#include "MercunaModifier.generated.h"

USTRUCT(BlueprintType)
struct FMercunaModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    FMercunaUsageTypes UsageTypes;
    
    MERCUNA_API FMercunaModifier();
};

