#pragma once
#include "CoreMinimal.h"
#include "UWETimeSeriesStats.generated.h"

USTRUCT()
struct FUWETimeSeriesStats {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Samples;
    
    UPROPERTY()
    int32 outliers;
    
    UPROPERTY()
    float min;
    
    UPROPERTY()
    float max;
    
    UPROPERTY()
    float avg;
    
    UPROPERTY()
    float median;
    
    UPROPERTY()
    float std_dev;
    
    UPROPERTY()
    float variance;
    
    UPROPERTY()
    float kurtosis;
    
    UWEAUTOMATIONTESTING_API FUWETimeSeriesStats();
};

