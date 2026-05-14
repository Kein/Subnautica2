#pragma once
#include "CoreMinimal.h"
#include "UWECameraAnimation.h"
#include "SN2StepSmoothingCameraAnimation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2StepSmoothingCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2StepOffsetDecayRate;
    
    UPROPERTY(Config)
    float SN2MaxOffset;
    
    USN2StepSmoothingCameraAnimation();

private:
    UFUNCTION()
    void OnStep(float StepAmount);
    
};

