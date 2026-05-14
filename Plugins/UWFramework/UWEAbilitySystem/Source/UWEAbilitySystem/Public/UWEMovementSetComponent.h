#pragma once
#include "CoreMinimal.h"
#include "UWEAttributeSetComponent.h"
#include "UWEMovementSetComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEMovementSetComponent : public UUWEAttributeSetComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttributeChangedDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FAttributeChangedDelegate OnMaxSpeedChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAttributeChangedDelegate OnRotationSpeedMultiplierChanged;
    
    UUWEMovementSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRotationSpeedMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetBaseWalkSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetBaseSwimSpeed(float Speed);
    
    UFUNCTION(BlueprintPure)
    float GetWaterCurrentTwistAngleMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterCurrentSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterCurrentCentricAngleMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetRotationSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSwimSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseWalkSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetBaseSwimSpeed();
    
};

