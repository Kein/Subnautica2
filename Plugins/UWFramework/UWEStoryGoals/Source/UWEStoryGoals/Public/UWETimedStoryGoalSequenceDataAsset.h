#pragma once
#include "CoreMinimal.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWETimedStoryGoalSequence.h"
#include "UWETimedStoryGoalSequenceDataAsset.generated.h"

UCLASS()
class UWESTORYGOALS_API UUWETimedStoryGoalSequenceDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUWETimedStoryGoalSequence sequence;
    
    UUWETimedStoryGoalSequenceDataAsset();

};

