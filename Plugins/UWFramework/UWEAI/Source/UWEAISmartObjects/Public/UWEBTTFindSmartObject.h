#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "GameplayTagContainer.h"
#include "UWEBTTFindSmartObject.generated.h"

UCLASS()
class UWEAISMARTOBJECTS_API UUWEBTTFindSmartObject : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery ActivityRequirements;
    
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector SmartObjectSlotLocationKey;
    
    UPROPERTY(EditAnywhere)
    bool AutoClaim;
    
    UPROPERTY(EditAnywhere)
    bool AutoUse;
    
public:
    UUWEBTTFindSmartObject();

};

