#include "GameSettingScreen.h"

UGameSettingScreen::UGameSettingScreen() {
    this->Settings_Panel = NULL;
    this->Registry = NULL;
}

void UGameSettingScreen::OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty) {
}

void UGameSettingScreen::NavigateToSettings(const TArray<FName>& SettingDevNames) {
}

void UGameSettingScreen::NavigateToSetting(FName SettingDevName) {
}

bool UGameSettingScreen::HaveSettingsBeenChanged() const {
    return false;
}

UGameSettingCollection* UGameSettingScreen::GetSettingCollection(FName SettingDevName, bool& HasAnySettings) {
    return NULL;
}

void UGameSettingScreen::CancelChanges() {
}

bool UGameSettingScreen::AttemptToPopNavigation() {
    return false;
}

void UGameSettingScreen::ApplyChanges() {
}


