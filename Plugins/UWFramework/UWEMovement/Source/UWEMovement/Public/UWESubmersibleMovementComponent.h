#pragma once
#include "CoreMinimal.h"
#include "UWEVehicleMovementComponent.h"
#include "UWESubmersibleMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWESubmersibleMovementComponent : public UUWEVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrafeMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwimmingFriction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaterGravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSwimAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlyAcceleration;
    
    UUWESubmersibleMovementComponent(const FObjectInitializer& ObjectInitializer);

};

