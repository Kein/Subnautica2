#pragma once
#include "CoreMinimal.h"
#include "UWERuntimeFloatScaleCurve.h"
#include "EUWEAIMovementOscillatoryMotionRotationAxis.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementOscillatoryMotionModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementOscillatoryMotionModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetOnMotionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementOscillatoryMotionRotationAxis RotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableHalfAngleAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERuntimeFloatScaleCurve HalfAngleAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfAngleRandomFromBaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HalfAngleRandomTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRotationSpeedAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERuntimeFloatScaleCurve RotationSpeedAnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableEaseInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EaseInOutExp;
    
    UUWEAIMovementOscillatoryMotionModuleSettings();

};

