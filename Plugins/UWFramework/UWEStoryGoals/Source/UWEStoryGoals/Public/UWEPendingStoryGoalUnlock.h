#pragma once
#include "CoreMinimal.h"
#include "UWEPendingStoryGoalUnlock.generated.h"

class AActor;
class UUWEStoryGoal;

USTRUCT(BlueprintType)
struct FUWEPendingStoryGoalUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoal;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(SaveGame)
    int32 PlayerId;
    
    UPROPERTY(SaveGame)
    float TimeRemaining;
    
    UPROPERTY(SaveGame)
    bool IgnorePrerequisites;
    
    UPROPERTY(SaveGame)
    float OriginalDelay;
    
    UWESTORYGOALS_API FUWEPendingStoryGoalUnlock();
};

