#include "UWEBiomodStatics.h"

UUWEBiomodStatics::UUWEBiomodStatics() {
}

bool UUWEBiomodStatics::ShouldIgnoreUnlockBiomodRequirements(const UObject* WorldContextObject) {
    return false;
}

bool UUWEBiomodStatics::HasBioScanCapability(APlayerState* PS) {
    return false;
}

bool UUWEBiomodStatics::HasBioAbility(const UUWEBioAbilityData* BioAbilityData, const AActor* Actor) {
    return false;
}

bool UUWEBiomodStatics::HasActiveBioAbility(const AActor* Actor) {
    return false;
}

TArray<UUWEBioAbilityData*> UUWEBiomodStatics::GetInstalledPassiveBioAbilities(const AActor* Actor) {
    return TArray<UUWEBioAbilityData*>();
}

TArray<UUWEBioAbilityData*> UUWEBiomodStatics::GetInstalledAbilities(const AActor* Actor) {
    return TArray<UUWEBioAbilityData*>();
}


