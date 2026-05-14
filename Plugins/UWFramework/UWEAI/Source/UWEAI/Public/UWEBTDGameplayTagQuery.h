#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEBTDGameplayTagQuery.generated.h"

UCLASS()
class UWEAI_API UUWEBTDGameplayTagQuery : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorForGameplayTagQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery GameplayTagQuery;
    
    UPROPERTY()
    TArray<FGameplayTag> QueryTags;
    
public:
    UUWEBTDGameplayTagQuery();

};

