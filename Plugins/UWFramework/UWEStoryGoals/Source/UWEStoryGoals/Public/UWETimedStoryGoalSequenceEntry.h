#pragma once
#include "CoreMinimal.h"
#include "UWETimedStoryGoalSequenceEntry.generated.h"

class UUWEDialogueSequence;
class UUWEStoryGoal;

USTRUCT()
struct FUWETimedStoryGoalSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEDialogueSequence> DialogueSequence;
    
    UPROPERTY(EditAnywhere)
    float TimeUntilNextGoalSeconds;
    
    UWESTORYGOALS_API FUWETimedStoryGoalSequenceEntry();
};

