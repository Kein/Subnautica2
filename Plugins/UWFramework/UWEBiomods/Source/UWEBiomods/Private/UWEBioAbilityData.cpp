#include "UWEBioAbilityData.h"
#include "Templates/SubclassOf.h"

UUWEBioAbilityData::UUWEBioAbilityData() {
    this->BioAbilityType = EUWEBioAbilityType::Passive;
}

bool UUWEBioAbilityData::IsUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UUWEBioAbilityData::IsCrafted(UObject* WorldContextObject) {
    return false;
}

bool UUWEBioAbilityData::IsActiveBioAbility() const {
    return false;
}

EUnlockState UUWEBioAbilityData::GetUnlockState(APlayerState* PlayerState) {
    return EUnlockState::Locked;
}

TArray<UUWEBioScanData*> UUWEBioAbilityData::GetUnlockedRequiredBioScans(UObject* WorldContextObject) {
    return TArray<UUWEBioScanData*>();
}

TArray<UUWEBioScanData*> UUWEBioAbilityData::GetMissingRequiredBioScans(UObject* WorldContextObject) {
    return TArray<UUWEBioScanData*>();
}

UUWEBioAbilityData* UUWEBioAbilityData::GetBioAbilityDataFromAbilityTag(FGameplayTag Tag) {
    return NULL;
}

UUWEBioAbilityData* UUWEBioAbilityData::GetBioAbilityDataFromAbility(const TSubclassOf<UGameplayAbility> AbilityClass) {
    return NULL;
}

TArray<UGameplayAbility*> UUWEBioAbilityData::GetBioAbilitiesForActor(const AActor* Actor) {
    return TArray<UGameplayAbility*>();
}

TArray<UUWEBioAbilityData*> UUWEBioAbilityData::GetAllBioAbilityData(bool bOnlyUnlocked, UObject* WorldContextObject) {
    return TArray<UUWEBioAbilityData*>();
}


