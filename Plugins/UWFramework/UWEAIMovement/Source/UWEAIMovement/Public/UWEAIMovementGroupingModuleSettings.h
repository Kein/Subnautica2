#pragma once
#include "CoreMinimal.h"
#include "UWEAIMovementAuxiliaryModuleSettings.h"
#include "UWEAIMovementGroupingModuleSettings.generated.h"

UCLASS()
class UWEAIMOVEMENT_API UUWEAIMovementGroupingModuleSettings : public UUWEAIMovementAuxiliaryModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CohesionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SeparationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlignmentWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableGroupInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroupInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableGroupOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroupOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseLeaderAsGroupCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeaderGroupCenterLeash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AddSteeringWithLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SteeringWithLeaderWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RemapAVGGroupForceProportionTo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AVGGroupForceProportionMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LeaderMatchVelocityWithGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LeaderVelocityDropDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LeadSkipsNeighbourActiveCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreCollisionBetweenMembers;
    
    UUWEAIMovementGroupingModuleSettings();

};

