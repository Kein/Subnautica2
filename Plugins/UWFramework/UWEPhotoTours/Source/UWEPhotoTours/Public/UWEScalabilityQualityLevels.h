#pragma once
#include "CoreMinimal.h"
#include "UWEScalabilityQualityLevels.generated.h"

USTRUCT()
struct FUWEScalabilityQualityLevels {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 effects_quality;
    
    UPROPERTY()
    int32 foliage_quality;
    
    UPROPERTY()
    int32 reflection_quality;
    
    UPROPERTY()
    float resolution_quality;
    
    UPROPERTY()
    int32 shading_quality;
    
    UPROPERTY()
    int32 shadow_quality;
    
    UPROPERTY()
    int32 texture_quality;
    
    UPROPERTY()
    int32 anti_aliasing_quality;
    
    UPROPERTY()
    int32 global_illumination_quality;
    
    UPROPERTY()
    int32 post_process_quality;
    
    UPROPERTY()
    int32 view_distance_quality;
    
    UPROPERTY()
    int32 landscape_quality;
    
    UPROPERTY()
    int32 clouds_quality;
    
    UWEPHOTOTOURS_API FUWEScalabilityQualityLevels();
};

