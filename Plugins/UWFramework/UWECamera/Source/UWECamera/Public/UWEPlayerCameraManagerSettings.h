#pragma once
#include "CoreMinimal.h"
#include "UWEPlayerCameraManagerSettings.generated.h"

USTRUCT(BlueprintType)
struct UWECAMERA_API FUWEPlayerCameraManagerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ViewPitchMin;
    
    UPROPERTY(EditAnywhere)
    float ViewPitchMax;
    
    UPROPERTY(EditAnywhere)
    float ViewYawMin;
    
    UPROPERTY(EditAnywhere)
    float ViewYawMax;
    
    UPROPERTY(EditAnywhere)
    float ViewRollMin;
    
    UPROPERTY(EditAnywhere)
    float ViewRollMax;
    
    FUWEPlayerCameraManagerSettings();
};

