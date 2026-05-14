#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWEStoryGoalCommandComponent.generated.h"

class UUWEStoryGoal;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESTORYGOALS_API UUWEStoryGoalCommandComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUWEStoryGoalCommandComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnlockWorldStoryGoal(UUWEStoryGoal* StoryGoal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UnlockPlayerStoryGoal(UUWEStoryGoal* StoryGoal);
    
};

