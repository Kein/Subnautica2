#include "GameSettingPanel.h"

UGameSettingPanel::UGameSettingPanel() {
    this->bIsFocusable = true;
    this->Registry = NULL;
    this->LastHoveredOrSelectedSetting = NULL;
    this->ListView_Settings = NULL;
    this->Details_Settings = NULL;
}

void UGameSettingPanel::RefreshFromSettings() {
}


