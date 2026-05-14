#pragma once
#include "CoreMinimal.h"
#include "PerformanceSnapshotMetric.generated.h"

USTRUCT()
struct FPerformanceSnapshotMetric {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Key;
    
    UPROPERTY()
    FString Key2;
    
    UPROPERTY()
    float Value;
    
    UWEAUTOMATIONTESTING_API FPerformanceSnapshotMetric();
};

