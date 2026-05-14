#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DMovementAccelerations.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA3DMOVEMENT_API FMercuna3DMovementAccelerations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Sideways;
    
    FMercuna3DMovementAccelerations();
};

