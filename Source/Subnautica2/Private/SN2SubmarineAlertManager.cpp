#include "SN2SubmarineAlertManager.h"

USN2SubmarineAlertManager::USN2SubmarineAlertManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasePlayOffset = 0.50f;
    this->SystemActiveEffect = NULL;
}

void USN2SubmarineAlertManager::RemoveAlert(FAlertInstHandle& Handle) {
}

void USN2SubmarineAlertManager::Multicast_PlayAlertInternal_Implementation(USN2SubmarineAlert* NewAlert) {
}

bool USN2SubmarineAlertManager::IsRedAlert() const {
    return false;
}

bool USN2SubmarineAlertManager::IsEnabled() const {
    return false;
}

bool USN2SubmarineAlertManager::IsAlertHandleValid(FAlertInstHandle Handle) {
    return false;
}

FAlertInstHandle USN2SubmarineAlertManager::AddAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown) {
    return FAlertInstHandle{};
}


