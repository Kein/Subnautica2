#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEAITargetEvaluationData.h"
#include "UWEBTSTargetAlteration.generated.h"

UCLASS()
class UWEAI_API UUWEBTSTargetAlteration : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    bool RestoreOriginalTarget;
    
    UPROPERTY(EditAnywhere)
    bool ReactOnCollision;
    
    UPROPERTY(EditAnywhere)
    float ReactOnCollisionChance;
    
    UPROPERTY(EditAnywhere)
    FFloatRange ReactOnCollisionDuration;
    
    UPROPERTY(EditAnywhere)
    bool ReactOnPerceivedActors;
    
    UPROPERTY(EditAnywhere)
    float ReactOnPerceivedActorsChance;
    
    UPROPERTY(EditAnywhere)
    FFloatRange ReactOnPerceivedActorsDuration;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetEvaluationData ReactOnPerceivedActorsFilter;
    
    UUWEBTSTargetAlteration();

};

