#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoryGoalAddResult.h"
#include "StoryGoalUnlockRecord.generated.h"

USTRUCT(BlueprintType)
struct FStoryGoalUnlockRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPrimaryAssetId StoryGoal;
    
    UPROPERTY()
    EStoryGoalAddResult Result;
    
    UPROPERTY()
    int32 Count;
    
    UWESTORYGOALS_API FStoryGoalUnlockRecord();
};

