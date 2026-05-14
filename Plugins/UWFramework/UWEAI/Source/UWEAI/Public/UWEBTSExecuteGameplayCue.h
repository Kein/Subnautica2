#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEAITargetActorSelector.h"
#include "UWEBTSExecuteGameplayCue.generated.h"

UCLASS()
class UWEAI_API UUWEBTSExecuteGameplayCue : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(EditAnywhere)
    FUWEAITargetActorSelector TargetSelector;
    
    UUWEBTSExecuteGameplayCue();

};

