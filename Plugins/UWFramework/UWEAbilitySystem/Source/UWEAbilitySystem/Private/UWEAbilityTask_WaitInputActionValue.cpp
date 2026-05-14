#include "UWEAbilityTask_WaitInputActionValue.h"

UUWEAbilityTask_WaitInputActionValue::UUWEAbilityTask_WaitInputActionValue() {
    this->InputAction = NULL;
}

UUWEAbilityTask_WaitInputActionValue* UUWEAbilityTask_WaitInputActionValue::WaitInputActionValue(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputAction* NewInputAction) {
    return NULL;
}

void UUWEAbilityTask_WaitInputActionValue::OnInputComponentChanged(UEnhancedInputComponent* OldInputComponent, UEnhancedInputComponent* NewInputComponent) {
}


