#pragma once
#include "CoreMinimal.h"
#include "UWECameraAnimation.h"
#include "SN2SSwimTiltCameraAnimation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SSwimTiltCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    float SN2SwimTiltSmoothRate;
    
    UPROPERTY(Config)
    float SN2MaxSwimTiltAngle;
    
public:
    USN2SSwimTiltCameraAnimation();

};

