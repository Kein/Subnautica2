#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "UWEOverlapWorldForce.h"
#include "UWESplineWorldForce.generated.h"

class USplineComponent;
class UUWESplineWorldForceVisualizer;

UCLASS()
class UWEWORLDFORCES_API AUWESplineWorldForce : public AUWEOverlapWorldForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESplineWorldForceVisualizer* EditorVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseFlowForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFlowForceChangeOverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve FlowForceChangeOverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFlowForceChangeOverLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve FlowForceChangeOverLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableFlowForceChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopFlowForceChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve FlowForceChangeOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseCentricForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCentricForceChangeOverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve CentricForceChangeOverRadius;
    
    AUWESplineWorldForce(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FVector GetForceAtSplineDurationProportion(float SplineDurationProportion);
    
    UFUNCTION(BlueprintCallable)
    FVector GetForceAtSplineDistance(float SplineDistance);
    
    UFUNCTION(BlueprintCallable)
    FVector GetForceAtLocation(const FVector& Location);
    
};

