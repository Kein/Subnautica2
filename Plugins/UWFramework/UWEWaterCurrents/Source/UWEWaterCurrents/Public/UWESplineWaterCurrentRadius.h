#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "UWESplineWaterCurrentRadius.generated.h"

USTRUCT(BlueprintType)
struct UWEWATERCURRENTS_API FUWESplineWaterCurrentRadius {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableValueChangeOverLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ValueChangeOverLength;
    
    FUWESplineWaterCurrentRadius();
};

