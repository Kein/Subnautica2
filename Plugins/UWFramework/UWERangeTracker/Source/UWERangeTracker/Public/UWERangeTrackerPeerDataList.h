#pragma once
#include "CoreMinimal.h"
#include "UWERangeTrackerPeerData.h"
#include "UWERangeTrackerPeerDataList.generated.h"

USTRUCT(BlueprintType)
struct FUWERangeTrackerPeerDataList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUWERangeTrackerPeerData> Objects;
    
    UWERANGETRACKER_API FUWERangeTrackerPeerDataList();
};

