#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "UWEItemMovementComponent.generated.h"

class UVolumeTrackerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWEItemMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UVolumeTrackerComponent* VolumeTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AirFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaterFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UnderwaterGravityZ;
    
    UUWEItemMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WakeUpAbove();
    
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintPure)
    bool IsSettled() const;
    
};

