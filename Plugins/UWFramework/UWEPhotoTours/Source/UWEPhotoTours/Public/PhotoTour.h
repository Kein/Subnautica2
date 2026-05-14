#pragma once
#include "CoreMinimal.h"
#include "UWEPerfTestResults.h"
#include "PerformanceSnapshot.h"
#include "UWEScalabilityQualityLevels.h"
#include "PhotoTour.generated.h"

USTRUCT()
struct FPhotoTour : public FUWEPerfTestResults {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPerformanceSnapshot> snapshots;
    
    UPROPERTY()
    FString csv_filename;
    
    UPROPERTY()
    FUWEScalabilityQualityLevels quality_levels;
    
    UPROPERTY()
    FString map_group;
    
    UPROPERTY()
    TArray<FString> Tags;
    
    UPROPERTY()
    FString runner;
    
    UWEPHOTOTOURS_API FPhotoTour();
};

