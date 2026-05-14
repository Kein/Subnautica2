#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UWEStoryGoalEntry.generated.h"

USTRUCT()
struct FUWEStoryGoalEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FPrimaryAssetId StoryGoal;
    
    UWESTORYGOALS_API FUWEStoryGoalEntry();
};

