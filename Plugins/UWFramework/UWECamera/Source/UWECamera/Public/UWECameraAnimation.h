#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Camera/CameraTypes.h"
#include "UWECameraAnimation.generated.h"

class ACharacter;
class UUWEFirstPersonCamera;

UCLASS(Abstract, Blueprintable)
class UWECAMERA_API UUWECameraAnimation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAffectsMeshLocation;
    
    UUWECameraAnimation();

    UFUNCTION(BlueprintPure)
    UUWEFirstPersonCamera* GetFirstPersonCamera() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPInitialize();
    
    UFUNCTION(BlueprintImplementableEvent)
    FMinimalViewInfo BPAnimateCamera(float DeltaTime, FMinimalViewInfo DesiredView);
    
};

