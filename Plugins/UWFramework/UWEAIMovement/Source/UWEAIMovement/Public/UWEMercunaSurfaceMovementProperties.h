#pragma once
#include "CoreMinimal.h"
#include "UWEMercunaSurfaceMovementProperties.generated.h"

USTRUCT(BlueprintType)
struct FUWEMercunaSurfaceMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAcceleration;
    
    UWEAIMOVEMENT_API FUWEMercunaSurfaceMovementProperties();
};

