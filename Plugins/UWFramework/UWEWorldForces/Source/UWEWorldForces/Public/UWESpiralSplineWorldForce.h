#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "UWESplineWorldForce.h"
#include "UWESpiralSplineWorldForce.generated.h"

UCLASS()
class UWEWORLDFORCES_API AUWESpiralSplineWorldForce : public AUWESplineWorldForce {
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
    AUWESpiralSplineWorldForce(const FObjectInitializer& ObjectInitializer);

};

