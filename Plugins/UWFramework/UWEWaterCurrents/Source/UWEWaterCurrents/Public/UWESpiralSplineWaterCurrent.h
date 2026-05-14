#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "UWESplineWaterCurrent.h"
#include "UWESpiralSplineWaterCurrent.generated.h"

UCLASS()
class UWEWATERCURRENTS_API AUWESpiralSplineWaterCurrent : public AUWESplineWaterCurrent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BottomCenter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BottomRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector TopCenter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TopRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve RadiusChangeOverHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpiralHeightStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TangentRadiusMult;
    
public:
    AUWESpiralSplineWaterCurrent(const FObjectInitializer& ObjectInitializer);

};

