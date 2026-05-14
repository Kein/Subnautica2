#include "UWEBioLabViewModel.h"

UUWEBioLabViewModel::UUWEBioLabViewModel() {
    this->AvailablePassiveBiomodSlots = 3;
}

void UUWEBioLabViewModel::OnAbilityRemoved(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle) {
}

void UUWEBioLabViewModel::OnAbilityGiven(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle) {
}

void UUWEBioLabViewModel::Disconnect() {
}


