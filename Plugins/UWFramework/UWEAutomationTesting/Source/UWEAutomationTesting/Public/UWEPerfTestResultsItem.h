#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEPerfTestResultsItem.generated.h"

USTRUCT()
struct FUWEPerfTestResultsItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FString actor_name;
    
    UPROPERTY()
    FString location_name;
    
    UPROPERTY()
    TMap<FString, FString> Fields;
    
    UPROPERTY()
    double load_time;
    
    UPROPERTY()
    float field_of_view;
    
    UPROPERTY()
    FVector2D viewport_size;
    
    UPROPERTY()
    float test_screen_percentage;
    
    UPROPERTY()
    float secondary_screen_percentage;
    
    UPROPERTY()
    FString csv_filename;
    
    UPROPERTY()
    FString memreport_filename;
    
    UWEAUTOMATIONTESTING_API FUWEPerfTestResultsItem();
};

