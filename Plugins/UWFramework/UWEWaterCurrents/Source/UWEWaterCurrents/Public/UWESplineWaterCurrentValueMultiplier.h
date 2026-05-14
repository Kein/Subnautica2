#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "UWESplineWaterCurrentValueMultiplier.generated.h"

USTRUCT(BlueprintType)
struct UWEWATERCURRENTS_API FUWESplineWaterCurrentValueMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConstantMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableValueChangeOverLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ValueChangeOverLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableValueChangeOverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ValueChangeOverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableValueChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopValueChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ValueChangeOverTime;
    
    FUWESplineWaterCurrentValueMultiplier();
};

