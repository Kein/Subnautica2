#pragma once
#include "CoreMinimal.h"
#include "UWEPerfTestResults.h"
#include "UWETimeSeriesStats.h"
#include "UWEVideoTourResults.generated.h"

USTRUCT()
struct FUWEVideoTourResults : public FUWEPerfTestResults {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString video_tour_name;
    
    UPROPERTY()
    FString video_url;
    
    UPROPERTY()
    FString csv_filename;
    
    UPROPERTY()
    FUWETimeSeriesStats frame_time;
    
    UPROPERTY()
    FUWETimeSeriesStats gpu_mem_used_mb;
    
    UPROPERTY()
    FUWETimeSeriesStats gpu_mem_available_mb;
    
    UPROPERTY()
    FUWETimeSeriesStats rhi_draw_calls;
    
    UPROPERTY()
    FUWETimeSeriesStats rhi_primitives_drawn;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_basepass;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_prepass;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_fog;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_lights;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_begin_occlusion_tests;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_single_layer_water_depth_prepass;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_single_layer_water;
    
    UPROPERTY()
    FUWETimeSeriesStats draw_call_slate_ui;
    
    UWEAUTOMATIONTESTING_API FUWEVideoTourResults();
};

