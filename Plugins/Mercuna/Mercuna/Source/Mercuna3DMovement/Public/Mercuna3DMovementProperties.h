#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DMovementAccelerations.h"
#include "Mercuna3DMovementWorldAccelerations.h"
#include "Mercuna3DMovementProperties.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA3DMOVEMENT_API FMercuna3DMovementProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMercuna3DMovementAccelerations MaxAccelerations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRollRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableWorldAccelerationLimits;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FMercuna3DMovementWorldAccelerations WorldAccelerationLimits;
    
    FMercuna3DMovementProperties();
};

