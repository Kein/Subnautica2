#pragma once
#include "CoreMinimal.h"
#include "MercunaSurfaceNavigationDynamicSteeringParameters.generated.h"

USTRUCT(BlueprintType)
struct FMercunaSurfaceNavigationDynamicSteeringParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxBrakingDeceleration;
    
    MERCUNA_API FMercunaSurfaceNavigationDynamicSteeringParameters();
};

