#include "SN2PIEUserSettings.h"

USN2PIEUserSettings::USN2PIEUserSettings() {
}

bool USN2PIEUserSettings::TryGetOverrideGameModeAlias(FString& alias) const {
    return false;
}

void USN2PIEUserSettings::SetOverrideGameModeAlias(const FString& alias) {
}

USN2PIEUserSettings* USN2PIEUserSettings::GetPIEUserSettings() {
    return NULL;
}


