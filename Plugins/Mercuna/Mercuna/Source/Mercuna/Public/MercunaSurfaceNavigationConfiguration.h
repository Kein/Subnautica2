#pragma once
#include "CoreMinimal.h"
#include "EMercunaAvoidanceWhenStationary.h"
#include "MercunaSurfaceNavigationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMercunaSurfaceNavigationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopAtDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAvoidanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaAvoidanceWhenStationary AvoidanceWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSetControllerRotation;
    
    MERCUNA_API FMercunaSurfaceNavigationConfiguration();
};

