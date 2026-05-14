#include "SN2SubmarineAlert.h"

USN2SubmarineAlert::USN2SubmarineAlert() {
    this->FMODEvent = NULL;
    this->Cooldown = 5.00f;
    this->PlayWhenNoPower = false;
    this->AlertSeverity = EAlertSeverity::Info;
    this->AlertThumbnail = NULL;
}

FGameplayTag USN2SubmarineAlert::GetSeverityTag() const {
    return FGameplayTag{};
}


