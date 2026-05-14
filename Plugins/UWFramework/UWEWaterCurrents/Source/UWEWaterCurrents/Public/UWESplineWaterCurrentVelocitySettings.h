#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWESplineWaterCurrentValueMultiplier.h"
#include "UWESplineWaterCurrentVelocitySettings.generated.h"

UCLASS(EditInlineNew)
class UWEWATERCURRENTS_API UUWESplineWaterCurrentVelocitySettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESplineWaterCurrentValueMultiplier SpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseCentricAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESplineWaterCurrentValueMultiplier CentricAngleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BendVelocityOverShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SplineLengthSampleDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseTwistAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWESplineWaterCurrentValueMultiplier TwistAngleMultiplier;
    
    UUWESplineWaterCurrentVelocitySettings();

};

