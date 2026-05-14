#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PerformanceSnapshotMetric.h"
#include "UWEPerfTestResultsItem.h"
#include "PerformanceSnapshot.generated.h"

USTRUCT()
struct FPerformanceSnapshot : public FUWEPerfTestResultsItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPerformanceSnapshotMetric> metrics;
    
    UPROPERTY()
    FString camera_name;
    
    UPROPERTY()
    FString camera_guid;
    
    UPROPERTY()
    FString Screenshot;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    int32 camera_index;
    
    UPROPERTY()
    FString map_name;
    
    UWEPHOTOTOURS_API FPerformanceSnapshot();
};

