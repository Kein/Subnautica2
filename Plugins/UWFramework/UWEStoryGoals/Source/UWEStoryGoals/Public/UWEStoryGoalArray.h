#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEStoryGoalEntry.h"
#include "UWEStoryGoalArray.generated.h"

class UUWEStoryGoalContainerComponent;

USTRUCT(BlueprintType)
struct FUWEStoryGoalArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UUWEStoryGoalContainerComponent* Owner;
    
    UPROPERTY(SaveGame)
    TArray<FUWEStoryGoalEntry> Entries;
    
    UWESTORYGOALS_API FUWEStoryGoalArray();
};

