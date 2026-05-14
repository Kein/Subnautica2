#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SN2TadpoleCameraSway.generated.h"

class ASN2Tadpole;

UCLASS(Config=Game)
class SUBNAUTICA2_API USN2TadpoleCameraSway : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    float SN2TadpoleCameraSwayRestRate;
    
    UPROPERTY(Config)
    float SN2SeafrogCameraSwayRestRate;
    
    UPROPERTY(Config)
    float SN2TadpoleCameraSwayMaxAngle;
    
    UPROPERTY(Config)
    float SN2TSeafrogCameraSwayMaxAngle;
    
    UPROPERTY(Config)
    float SN2TadpoleCameraMoveRate;
    
    UPROPERTY(Config)
    float SN2SeafrogCameraMoveRate;
    
private:
    UPROPERTY()
    TWeakObjectPtr<ASN2Tadpole> RegisteredToTadpole;
    
public:
    USN2TadpoleCameraSway();

private:
    UFUNCTION()
    void OnInputYaw(float Angle);
    
    UFUNCTION()
    void OnInputPitch(float Angle);
    
};

