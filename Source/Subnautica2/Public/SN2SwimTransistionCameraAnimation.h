#pragma once
#include "CoreMinimal.h"
#include "UWECameraAnimation.h"
#include "SN2SwimTransistionCameraAnimation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2SwimTransistionCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2SwimZOffset;
    
    UPROPERTY(Config)
    float SN2SmoothRate;
    
    USN2SwimTransistionCameraAnimation();

};

