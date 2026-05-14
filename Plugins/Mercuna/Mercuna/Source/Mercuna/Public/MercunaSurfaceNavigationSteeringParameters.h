#pragma once
#include "CoreMinimal.h"
#include "MercunaSurfaceNavigationSteeringParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaSurfaceNavigationSteeringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IdealTurningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxBrakeDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundFriction;
    
    MERCUNA_API FMercunaSurfaceNavigationSteeringParameters();
};

