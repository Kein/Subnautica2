#pragma once
#include "CoreMinimal.h"
#include "MercunaGroundNavigationDynamicSteeringParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaGroundNavigationDynamicSteeringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxBrakeDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PowerToWeightRatio;
    
    MERCUNA_API FMercunaGroundNavigationDynamicSteeringParameters();
};

