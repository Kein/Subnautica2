#pragma once
#include "CoreMinimal.h"
#include "UWEAILODDecisionParameters.h"
#include "UWEAILODLocomotionParameters.h"
#include "UWEAILODPerceptionParameters.h"
#include "UWEAILODPlayerViewParameters.h"
#include "UWEAILODParameters.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct UWEAI_API FUWEAILODParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool EnableLODs;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreAILODDespawn;
    
    UPROPERTY(EditAnywhere)
    float LODDistance[5];
    
    UPROPERTY(EditAnywhere)
    FUWEAILODPlayerViewParameters PlayerView[5];
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBehaviorTree> LODBehaviorTree[5];
    
    UPROPERTY(EditAnywhere)
    FUWEAILODDecisionParameters LODDecision[5];
    
    UPROPERTY(EditAnywhere)
    FUWEAILODPerceptionParameters LODPerception[5];
    
    UPROPERTY(EditAnywhere)
    FUWEAILODLocomotionParameters LODLocomotion[5];
    
    FUWEAILODParameters();
};

