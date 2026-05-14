#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "UWECameraAnimation.h"
#include "SN2ImpactBounceCameraAnimation.generated.h"

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2ImpactBounceCameraAnimation : public UUWECameraAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2JumpLandReboundRate;
    
    UPROPERTY(Config)
    float SN2ImpactVelocityCamDrag;
    
    UPROPERTY(Config)
    float SN2MaxCameraBounceOffset;
    
    USN2ImpactBounceCameraAnimation();

private:
    UFUNCTION()
    void OnCharacterLanded(const FHitResult& Hit);
    
};

