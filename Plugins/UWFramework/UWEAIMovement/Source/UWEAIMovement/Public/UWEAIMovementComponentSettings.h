#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEAIMovementComponentSettings.generated.h"

class UUWEAIMovementCircularMotionModuleSettings;
class UUWEAIMovementCoreModuleSettings;
class UUWEAIMovementGroupingModuleSettings;
class UUWEAIMovementOscillatoryMotionModuleSettings;
class UUWEAIMovementSpeedAlterationModuleSettings;
class UUWEAIMovementSpiralHeightChangeModuleSettings;
class UUWEAIMovementStaticObstacleAvoidanceModuleSettings;

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementComponentSettings : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementCoreModuleSettings* CoreModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementStaticObstacleAvoidanceModuleSettings* StaticObstacleAvoidanceModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementOscillatoryMotionModuleSettings* OscillatoryMotionModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementSpiralHeightChangeModuleSettings* SpiralHeightChangeModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementCircularMotionModuleSettings* CircularMotionModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementSpeedAlterationModuleSettings* SpeedAlterationModuleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UUWEAIMovementGroupingModuleSettings* GroupingModuleSettings;
    
    UUWEAIMovementComponentSettings();

    UFUNCTION(BlueprintPure)
    TArray<UUWEPrimaryDataAssetBase*> GetAllSettings() const;
    
};

