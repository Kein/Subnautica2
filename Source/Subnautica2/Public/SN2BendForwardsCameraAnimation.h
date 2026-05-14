#pragma once
#include "CoreMinimal.h"
#include "UWECameraAnimation.h"
#include "SN2BendForwardsCameraAnimation.generated.h"

UCLASS()
class SUBNAUTICA2_API USN2BendForwardsCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float AnchorDistance;
    
    USN2BendForwardsCameraAnimation();

};

