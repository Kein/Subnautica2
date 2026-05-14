#include "UWESaveGameAnalyticsEventInfo.h"

FUWESaveGameAnalyticsEventInfo::FUWESaveGameAnalyticsEventInfo() {
    this->IsMultiplayerSave = false;
    this->SaveGameSizeInKb = 0.00f;
    this->NumManualSaves = 0;
}

