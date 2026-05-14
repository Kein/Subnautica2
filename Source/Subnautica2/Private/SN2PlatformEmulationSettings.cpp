#include "SN2PlatformEmulationSettings.h"

USN2PlatformEmulationSettings::USN2PlatformEmulationSettings() {
    this->bApplyFrameRateSettingsInPIE = false;
    this->bApplyFrontEndPerformanceOptionsInPIE = false;
    this->bApplyDeviceProfilesInPIE = false;
}

TArray<FName> USN2PlatformEmulationSettings::GetKnownPlatformIds() const {
    return TArray<FName>();
}

TArray<FName> USN2PlatformEmulationSettings::GetKnownDeviceProfiles() const {
    return TArray<FName>();
}


