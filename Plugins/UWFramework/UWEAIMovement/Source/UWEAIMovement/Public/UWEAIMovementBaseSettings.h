#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "EUWEAIMovementSwitchingOppositeDirectionStrategy.h"
#include "UWEAIMovementBaseEnvironmentSettings.h"
#include "UWEAIMovementDirectionMultiplier.h"
#include "UWEAIMovementBaseSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementBaseSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseForceMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2f EllipseAreaFacingForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableVolumetricDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEAIMovementDirectionMultiplier VolumetricDrag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LockPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LockYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LockRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HardAngleLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEAIMovementSwitchingOppositeDirectionStrategy SwitchingOppositeDirectionStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwitchOppositeDirectionAngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BuoyancyAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FUWEAIMovementBaseEnvironmentSettings> EnvironmentSettings;
    
    UUWEAIMovementBaseSettings();

};

