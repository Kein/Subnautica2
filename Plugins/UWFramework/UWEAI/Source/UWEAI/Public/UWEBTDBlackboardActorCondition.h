#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "UWEBTDActorConditionBase.h"
#include "UWEBTDBlackboardActorCondition.generated.h"

UCLASS()
class UWEAI_API UUWEBTDBlackboardActorCondition : public UUWEBTDActorConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery GameplayTagQuery;
    
    UUWEBTDBlackboardActorCondition();

};

