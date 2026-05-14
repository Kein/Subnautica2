#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DMovementWorldAccelerations.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA3DMOVEMENT_API FMercuna3DMovementWorldAccelerations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Upward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Downward;
    
    FMercuna3DMovementWorldAccelerations();
};

