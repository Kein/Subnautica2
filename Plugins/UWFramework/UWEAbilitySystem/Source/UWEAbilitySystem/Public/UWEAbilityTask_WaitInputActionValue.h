#pragma once
#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWEAbilityTask_WaitInputActionValue.generated.h"

class UEnhancedInputComponent;
class UGameplayAbility;
class UInputAction;
class UUWEAbilityTask_WaitInputActionValue;

UCLASS()
class UWEABILITYSYSTEM_API UUWEAbilityTask_WaitInputActionValue : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputActionDelegate, FInputActionValue, Value);
    
    UPROPERTY(BlueprintAssignable)
    FInputActionDelegate OnStarted;
    
    UPROPERTY(BlueprintAssignable)
    FInputActionDelegate OnOngoing;
    
    UPROPERTY(BlueprintAssignable)
    FInputActionDelegate OnActionValue;
    
    UPROPERTY(BlueprintAssignable)
    FInputActionDelegate OnCompleted;
    
private:
    UPROPERTY()
    UInputAction* InputAction;
    
public:
    UUWEAbilityTask_WaitInputActionValue();

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitInputActionValue* WaitInputActionValue(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputAction* NewInputAction);
    
private:
    UFUNCTION()
    void OnInputComponentChanged(UEnhancedInputComponent* OldInputComponent, UEnhancedInputComponent* NewInputComponent);
    
};

