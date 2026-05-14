#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "UWERuntimeFloatScaleCurve.generated.h"

USTRUCT(BlueprintType)
struct UWEUTILITIES_API FUWERuntimeFloatScaleCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ScaleCurve;
    
    FUWERuntimeFloatScaleCurve();
};

