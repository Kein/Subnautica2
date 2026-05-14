#pragma once
#include "CoreMinimal.h"
#include "UWECameraAnimation.h"
#include "SN2SwimBobCameraAnimation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SwimBobCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2SwimBobAmount;
    
    UPROPERTY(Config)
    float SN2SwimBobSpeed;
    
    UPROPERTY(Config)
    float SN2SwimBobMinSpeedFraction;
    
    USN2SwimBobCameraAnimation();

};

