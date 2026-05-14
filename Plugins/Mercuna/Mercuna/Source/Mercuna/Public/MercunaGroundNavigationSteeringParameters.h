#pragma once
#include "CoreMinimal.h"
#include "MercunaGroundNavigationSteeringParameters.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaGroundNavigationSteeringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKinematicPathfinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IdealTurningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinTurningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PowerToWeightRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxBrakeDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundFriction;
    
    FMercunaGroundNavigationSteeringParameters();
};

