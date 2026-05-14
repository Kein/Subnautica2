#pragma once
#include "CoreMinimal.h"
#include "UWESculpturalBaseCellCost.h"
#include "BrushTypeCost.generated.h"

USTRUCT(BlueprintType)
struct FBrushTypeCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FUWESculpturalBaseCellCost> Costs;
    
    UWESCULPTURALBASE_API FBrushTypeCost();
};

