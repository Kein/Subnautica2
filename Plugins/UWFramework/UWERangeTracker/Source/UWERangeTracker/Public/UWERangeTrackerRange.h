#pragma once
#include "CoreMinimal.h"
#include "UWERangeTrackerRange.generated.h"

USTRUCT(BlueprintType)
struct FUWERangeTrackerRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Lower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Upper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InfiniteUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableTargetViewConeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double TargetViewConeHalfAngle;
    
    UWERANGETRACKER_API FUWERangeTrackerRange();
};

