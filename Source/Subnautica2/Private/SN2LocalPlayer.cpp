#include "SN2LocalPlayer.h"
#include "SN2SettingsDebug.h"

USN2LocalPlayer::USN2LocalPlayer() {
    this->SharedSettings = NULL;
    this->DebugSettings = CreateDefaultSubobject<USN2SettingsDebug>(TEXT("DebugSettings"));
}

USN2SettingsShared* USN2LocalPlayer::GetSharedSettings() const {
    return NULL;
}

USN2SettingsLocal* USN2LocalPlayer::GetLocalSettings() const {
    return NULL;
}

USN2SettingsDebug* USN2LocalPlayer::GetDebugSettings() const {
    return NULL;
}


