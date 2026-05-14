#include "UWEBioAbilityViewModel.h"

UUWEBioAbilityViewModel::UUWEBioAbilityViewModel() {
    this->AbilityData = NULL;
    this->BioAbilityType = EUWEBioAbilityType::Passive;
    this->bIsInstalled = false;
    this->bIsCrafted = false;
    this->bShowRequirements = true;
    this->bIsActive = false;
    this->bIsPinned = false;
    this->bAvailabilityOverriden = false;
}

void UUWEBioAbilityViewModel::UninstallBioAbility() {
}

void UUWEBioAbilityViewModel::TrySetRecipePinned(bool bNewValue) {
}

void UUWEBioAbilityViewModel::Setup(UUWEBioAbilityData* InAbilityData, AUWEBioLab* biolab, UUWEBiomodCrafterInteractionComponent* InteractionComponent, AActor* BioAbilityOwner, bool bInIsInstalled, bool bInAvailabilityOverriden) {
}

void UUWEBioAbilityViewModel::OnRecipeUnpinned(UUWEPrimaryDataAssetBase* Recipe) {
}

void UUWEBioAbilityViewModel::OnRecipePinned(UUWEPrimaryDataAssetBase* Recipe) {
}

void UUWEBioAbilityViewModel::InstallBioAbility() {
}

int32 UUWEBioAbilityViewModel::GetRemainingCooldownSeconds(UObject* WorldContextObject) const {
    return 0;
}

float UUWEBioAbilityViewModel::GetCooldownFraction(UObject* WorldContextObject) const {
    return 0.0f;
}


