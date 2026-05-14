#include "SN2GasAttributeViewModel.h"

USN2GasAttributeViewModel::USN2GasAttributeViewModel() {
    this->Value = 0.00f;
    this->MaxValue = 0.00f;
    this->Percentage = 0.00f;
}

void USN2GasAttributeViewModel::Initialize(UAbilitySystemComponent* InASC, FGameplayAttribute InValueAttribute, FGameplayAttribute InMaxValueAttribute) {
}


