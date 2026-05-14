#pragma once
#include "CoreMinimal.h"
#include "EMercunaAvoidanceWhenStationary.h"
#include "MercunaGroundNavigationConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FMercunaGroundNavigationConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StopAtDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAvoidanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMercunaAvoidanceWhenStationary AvoidanceWhenStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlopePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TractionEstimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool ShrinkCapsuleDuringAutoJumps;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bSetControllerRotation;
    
    MERCUNA_API FMercunaGroundNavigationConfiguration();
};

