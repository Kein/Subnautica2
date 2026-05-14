#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UWEStaticObstacleAvoidanceTraceSettings.h"
#include "UWEAIMovementStaticObstacleAvoidanceModuleProfile.generated.h"

UCLASS(BlueprintType, DefaultToInstanced, EditInlineNew)
class UWEAIMOVEMENT_API UUWEAIMovementStaticObstacleAvoidanceModuleProfile : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoSetAvoidObstacleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidObstacleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AvoidObstacleDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlideTriggerAvoidObstacleDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DoDepenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DepenetrationTriggerAvoidObstacleDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SlowdownBeforeObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlowdownForceProportion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InstantVelocityDirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEStaticObstacleAvoidanceTraceSettings> Traces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenEachTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AsyncTracing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SkipSweepTestIfNoObstaclesSensed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstaclesSensedCooldownTime;
    
    UUWEAIMovementStaticObstacleAvoidanceModuleProfile();

};

