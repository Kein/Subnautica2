#pragma once
#include "CoreMinimal.h"
#include "UWERangeTrackerPeerRangeData.h"
#include "UWERangeTrackerPeerData.generated.h"

class USceneComponent;

USTRUCT()
struct FUWERangeTrackerPeerData {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USceneComponent* Peer;
    
    UPROPERTY()
    TArray<FUWERangeTrackerPeerRangeData> RangeData;
    
    UWERANGETRACKER_API FUWERangeTrackerPeerData();
};

