#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "UWEAIMovementStoppingConfig.h"
#include "EUWEBTTMoveToNavigationType.h"
#include "UWEBTTMoveTo_FailByDistanceChange_Settings.h"
#include "UWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings.h"
#include "UWEBTTMoveTo.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTMoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LookTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag MovementStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUWEBTTMoveToNavigationType NavigationType;
    
    UPROPERTY(EditAnywhere)
    bool PathfindingAllowPartialPath;
    
    UPROPERTY(EditAnywhere)
    bool PathfindingAllowFallbackToDirectSteering;
    
    UPROPERTY(EditAnywhere)
    bool IncludeTargetRadiusInApproachDistance;
    
    UPROPERTY(EditAnywhere)
    bool IncludeAgentRadiusInApproachDistance;
    
    UPROPERTY(EditAnywhere)
    float ApproachDistance;
    
    UPROPERTY(EditAnywhere)
    bool PickClosestPointOnTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> PickClosestPointOnTargetCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    bool UpdateClosestPointOnTarget;
    
    UPROPERTY(EditAnywhere)
    float UpdateClosestPointOnTargetCooldown;
    
    UPROPERTY(EditAnywhere)
    float StartForceProportion;
    
    UPROPERTY(EditAnywhere)
    float FinishForceProportion;
    
    UPROPERTY(EditAnywhere)
    FUWEAIMovementStoppingConfig StoppingConfig;
    
    UPROPERTY(EditAnywhere)
    bool PredictLocation;
    
    UPROPERTY(EditAnywhere)
    float PredictedMotionLengthMult;
    
    UPROPERTY(EditAnywhere)
    bool AlwaysDisableAuxiliaryModules;
    
    UPROPERTY(EditAnywhere)
    float DisableAuxiliaryModulesByDistance;
    
    UPROPERTY(EditAnywhere)
    uint8 AuxiliaryModulesToDisable;
    
    UPROPERTY(EditAnywhere)
    bool AddActorTargetToObstacleAvoidanceIgnoredList;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreCollisionWithActorTarget;
    
    UPROPERTY(EditAnywhere)
    FUWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings KeepTargetLocationAwayFromObstaclesSettings;
    
    UPROPERTY(EditAnywhere)
    FUWEBTTMoveTo_FailByDistanceChange_Settings FailByDistanceChangeSettings;
    
public:
    UUWEBTTMoveTo();

};

