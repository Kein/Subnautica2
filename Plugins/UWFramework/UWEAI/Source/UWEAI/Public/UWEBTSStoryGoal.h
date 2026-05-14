#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "UWEAIWorldOrPlayerNotifyType.h"
#include "UWEBTSStoryGoal.generated.h"

class UUWEStoryGoal;

UCLASS()
class UWEAI_API UUWEBTSStoryGoal : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UWEAIWorldOrPlayerNotifyType NotifyType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoal;
    
public:
    UUWEBTSStoryGoal();

};

