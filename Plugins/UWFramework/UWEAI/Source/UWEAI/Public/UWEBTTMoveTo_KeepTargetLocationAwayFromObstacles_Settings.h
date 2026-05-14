#pragma once
#include "CoreMinimal.h"
#include "EUWEBTTMoveToTraceCheckType.h"
#include "EUWEBTTMoveToTraceType.h"
#include "UWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings.generated.h"

USTRUCT(BlueprintType)
struct FUWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Enabled;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    bool StaticObstaclesOnly;
    
    UPROPERTY(EditAnywhere)
    EUWEBTTMoveToTraceType TraceType;
    
    UPROPERTY(EditAnywhere)
    EUWEBTTMoveToTraceCheckType TraceCheckType;
    
    UPROPERTY(EditAnywhere)
    bool FilterSurfaceTypes;
    
    UPROPERTY(EditAnywhere)
    uint8 SurfaceTypes;
    
    UWEAI_API FUWEBTTMoveTo_KeepTargetLocationAwayFromObstacles_Settings();
};

