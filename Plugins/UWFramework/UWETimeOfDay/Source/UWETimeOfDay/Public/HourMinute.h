#pragma once
#include "CoreMinimal.h"
#include "HourMinute.generated.h"

USTRUCT(BlueprintType)
struct FHourMinute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Minute;
    
    UWETIMEOFDAY_API FHourMinute();
};

