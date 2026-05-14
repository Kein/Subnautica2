#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehavior.h"
#include "GameplayTagContainer.h"
#include "UWEAIBehaviorTreeParams.h"
#include "UWEBTTRunBehavior.generated.h"

class UBehaviorTree;

UCLASS()
class UWEAI_API UUWEBTTRunBehavior : public UBTTask_RunBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 rank;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, UBehaviorTree*> Injections;
    
    UPROPERTY(EditAnywhere)
    FUWEAIBehaviorTreeParams Params;
    
    UUWEBTTRunBehavior();

};

