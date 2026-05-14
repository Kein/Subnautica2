#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAIMovementCoreModuleSettings.generated.h"

UCLASS(Abstract)
class UWEAIMOVEMENT_API UUWEAIMovementCoreModuleSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseForceMagnitudeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DragCoefficientMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularDragToAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableArriveToTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MatchSpeedWithTargetAtAngleDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRotationRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationRollRestoreSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowLookRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookRotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DropVelocityByTurningAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningAngleForVelocityDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningAngleVelocityDropProportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StoppingVelocityProportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StoppingVelocityAlignmentCosEpsilon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuoyancyAccelerationMultiplier;
    
    UUWEAIMovementCoreModuleSettings();

};

