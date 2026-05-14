#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "UWERuntimeFloatScaleCurve.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementSpeedAlterationModuleSettingsRandom.h"
#include "UWEAIMovementSpeedAlterationModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementSpeedAlterationModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetOnMotionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlendMultiplierBetweenRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendMultiplierBetweenRequestsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRandomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEAIMovementSpeedAlterationModuleSettingsRandom> RandomSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSpeedAnimationByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERuntimeFloatScaleCurve SpeedAnimationByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRandomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D RandomTimeDilationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSpeedAnimationByDistanceFromStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SpeedAnimationByDistanceFromStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSpeedAnimationByDistanceFromEndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SpeedAnimationByDistanceFromEndLocation;
    
    UUWEAIMovementSpeedAlterationModuleSettings();

};

