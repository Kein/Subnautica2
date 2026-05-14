#pragma once
#include "CoreMinimal.h"
#include "UWEDynamicRandomFloatRangeConfig.generated.h"

USTRUCT(BlueprintType)
struct FUWEDynamicRandomFloatRangeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RandomInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TransitionTimeBetweenMinAndMax;
    
    UWEMATH_API FUWEDynamicRandomFloatRangeConfig();
};

