#pragma once
#include "CoreMinimal.h"
#include "UWERangeTrackerInRangeCallbackBPDelegate.h"
#include "UWERangeTrackerOutOfRangeCallbackBPDelegate.h"
#include "UWERangeTrackerPeerRangeCallbacks.generated.h"

USTRUCT(BlueprintType)
struct FUWERangeTrackerPeerRangeCallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowBackgroundThreadCall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERangeTrackerInRangeCallbackBP InRangeCallbackBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWERangeTrackerOutOfRangeCallbackBP OutOfRangeCallbackBP;
    
    UWERANGETRACKER_API FUWERangeTrackerPeerRangeCallbacks();
};

