#include "UWEBiomodHUDViewModel.h"

UUWEBiomodHUDViewModel::UUWEBiomodHUDViewModel() {
    this->bLatestDisplayBiomodActiveState = false;
    this->WorldContextObject = NULL;
}

UUWEBiomodHUDViewModel* UUWEBiomodHUDViewModel::TryGetBiomodHUDViewModel(UObject* WorldContext) {
    return NULL;
}

void UUWEBiomodHUDViewModel::OnLocalClientReady() {
}

void UUWEBiomodHUDViewModel::OnAbilityRemoved(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle) {
}

void UUWEBiomodHUDViewModel::OnAbilityGiven(const UUWEAbilitySystemComponent* ASC, const FGameplayAbilitySpecHandle& AbilitySpecHandle) {
}

void UUWEBiomodHUDViewModel::OnAbilityEnded(UGameplayAbility* GameplayAbility) {
}

void UUWEBiomodHUDViewModel::OnAbilityCommit(UGameplayAbility* GameplayAbility) {
}

void UUWEBiomodHUDViewModel::OnAbilityActivated(UGameplayAbility* GameplayAbility) {
}

UUWEBioAbilityViewModel* UUWEBiomodHUDViewModel::GetViewModelForAbility(const UGameplayAbility* GameplayAbility) const {
    return NULL;
}

void UUWEBiomodHUDViewModel::DisplayBiomodActiveState(UGameplayAbility* GameplayAbility, bool bIsActive) {
}


