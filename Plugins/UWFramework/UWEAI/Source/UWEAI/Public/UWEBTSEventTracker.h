#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "UWEAIWorldOrPlayerNotifyType.h"
#include "UWEBTSEventTracker.generated.h"

UCLASS()
class UWEAI_API UUWEBTSEventTracker : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UWEAIWorldOrPlayerNotifyType NotifyType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Verb;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Tag;
    
public:
    UUWEBTSEventTracker();

};

