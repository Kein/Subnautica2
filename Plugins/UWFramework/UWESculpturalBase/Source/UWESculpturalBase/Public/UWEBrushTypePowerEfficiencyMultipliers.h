#pragma once
#include "CoreMinimal.h"
#include "UWEBrushTypePowerEfficiencyMultipliers.generated.h"

USTRUCT(BlueprintType)
struct FUWEBrushTypePowerEfficiencyMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GenerationMultipiler;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ConsumptionMultiplier;
    
    UWESCULPTURALBASE_API FUWEBrushTypePowerEfficiencyMultipliers();
};

