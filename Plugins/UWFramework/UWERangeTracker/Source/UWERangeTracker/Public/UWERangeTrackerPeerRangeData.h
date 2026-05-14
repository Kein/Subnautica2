#pragma once
#include "CoreMinimal.h"
#include "UWERangeTrackerPeerRangeData.generated.h"

class USceneComponent;

USTRUCT()
struct FUWERangeTrackerPeerRangeData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> BestTarget;
    
    UWERANGETRACKER_API FUWERangeTrackerPeerRangeData();
};

