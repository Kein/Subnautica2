#pragma once
#include "CoreMinimal.h"
#include "UWETimedStoryGoalSequenceEntry.h"
#include "UWETimedStoryGoalSequence.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FUWETimedStoryGoalSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FUWETimedStoryGoalSequenceEntry> sequence;
    
    UPROPERTY(Transient)
    float TimeSinceLastEntry;
    
    UPROPERTY(Transient)
    int32 CurrentEntryIndex;
    
    UPROPERTY(Transient)
    TArray<APlayerState*> PlayersForSequence;
    
    UWESTORYGOALS_API FUWETimedStoryGoalSequence();
};

