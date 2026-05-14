#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EUUWEBTTInterpolateToInterpolationType.h"
#include "UWEBTTInterpolateTo.generated.h"

UCLASS(BlueprintType)
class UWEAI_API UUWEBTTInterpolateTo : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector LocationKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector RotationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EUUWEBTTInterpolateToInterpolationType InterpolationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExponentialSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TakeLinearSpeedFromActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LinearSpeed;
    
public:
    UUWEBTTInterpolateTo();

};

