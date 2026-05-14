#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SN2AbilityTask_WaitAccelerationChanged.generated.h"

class UGameplayAbility;
class USN2AbilityTask_WaitAccelerationChanged;
class UUWECharacterMovementComponentBase;

UCLASS()
class SUBNAUTICA2_API USN2AbilityTask_WaitAccelerationChanged : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAccelerationTaskDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FAccelerationTaskDelegate HasAcceleration;
    
    UPROPERTY(BlueprintAssignable)
    FAccelerationTaskDelegate HasNoAcceleration;
    
    UPROPERTY()
    float CurrentAccelerationLength;
    
    UPROPERTY()
    bool bHasAcceleration;
    
    UPROPERTY(Instanced)
    UUWECharacterMovementComponentBase* MovementComponent;
    
    USN2AbilityTask_WaitAccelerationChanged();

    UFUNCTION(BlueprintCallable)
    static USN2AbilityTask_WaitAccelerationChanged* WaitAccelerationChanged(UGameplayAbility* OwningAbility, UUWECharacterMovementComponentBase* InMovementComponent);
    
};

