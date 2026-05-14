#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWERangeTrackerRange.h"
#include "UWERangeTrackerPeerRangeConfig.generated.h"

USTRUCT(BlueprintType)
struct FUWERangeTrackerPeerRangeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERangeTrackerRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AddTagToGAS;
    
    UWERANGETRACKER_API FUWERangeTrackerPeerRangeConfig();
};

