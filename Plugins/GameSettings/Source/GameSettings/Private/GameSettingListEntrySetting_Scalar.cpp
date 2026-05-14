#include "GameSettingListEntrySetting_Scalar.h"

UGameSettingListEntrySetting_Scalar::UGameSettingListEntrySetting_Scalar() {
    this->ScalarSetting = NULL;
    this->Panel_Value = NULL;
    this->Slider_SettingValue = NULL;
    this->Text_SettingValue = NULL;
}



void UGameSettingListEntrySetting_Scalar::HandleSliderValueChanged(float Value) {
}

void UGameSettingListEntrySetting_Scalar::HandleSliderCaptureEnded() {
}


