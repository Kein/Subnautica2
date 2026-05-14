#pragma once
#include "CoreMinimal.h"
#include "EMercunaAvoidanceWhenStationary.h"
#include "EMercunaMoveInForwardDirection.h"
#include "Mercuna3DNavigationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMercuna3DNavigationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaMoveInForwardDirection MoveInForwardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopAtDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaAvoidanceWhenStationary AvoidanceWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightChangePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SmoothPaths;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float RollAnticipationTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float DistanceAllowedOffPath;
    
    MERCUNA_API FMercuna3DNavigationConfiguration();
};

