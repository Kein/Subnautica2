#include "GameSetting.h"

UGameSetting::UGameSetting() {
    this->LocalPlayer = NULL;
    this->SettingParent = NULL;
    this->OwningRegistry = NULL;
}

FText UGameSetting::GetWarningRichText() const {
    return FText::GetEmpty();
}

FGameplayTagContainer UGameSetting::GetTags() const {
    return FGameplayTagContainer{};
}

FText UGameSetting::GetDynamicDetails() const {
    return FText::GetEmpty();
}

ESlateVisibility UGameSetting::GetDisplayNameVisibility() {
    return ESlateVisibility::Visible;
}

FText UGameSetting::GetDisplayName() const {
    return FText::GetEmpty();
}

FName UGameSetting::GetDevName() const {
    return NAME_None;
}

FText UGameSetting::GetDescriptionRichText() const {
    return FText::GetEmpty();
}


