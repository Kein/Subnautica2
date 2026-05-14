#include "SN2SettingsLocal.h"

USN2SettingsLocal::USN2SettingsLocal() {
    this->bDesiredHeadphoneMode = false;
    this->SharedSettings = NULL;
    this->ROGAllyCustomModeEnabled = 0;
    this->FrameRateLimit_OnBattery = 60.00f;
    this->FrameRateLimit_InMenu = 60.00f;
    this->FrameRateLimit_WhenBackgrounded = 30.00f;
    this->UpscalingMethod = EUpscalingMethod::U_TSR;
    this->TSRQualityMode = 2;
    this->DLSSQualityMode = 5;
    this->DynamicResFrameTime = 16.67f;
    this->UpscalingFrameGeneration = 0;
    this->ResolutionScaleFixed = 0.80f;
    this->ResolutionScaleDLSS = 0.80f;
    this->ResolutionScaleMin = 0.50f;
    this->ResolutionScaleMax = 1.00f;
    this->bUseHeadphoneMode = false;
    this->GammaValue = 2.30f;
    this->EnableMotionBlur = ESN2EnableMotionBlurSetting::On;
    this->EnableChromaticAberration = ESN2EnableChromaticAberrationSetting::Off;
    this->EnableLensFlare = ESN2EnableLensFlareSetting::Off;
    this->EnableUnderwaterBlur = ESN2EnableUnderwaterBlurSetting::Off;
}

bool USN2SettingsLocal::ShouldRunAutoBenchmarkAtStartup() const {
    return false;
}

void USN2SettingsLocal::SetQualityModeImmediate(bool bQualityMode) {
}

void USN2SettingsLocal::SetFrameRateLimitImmediate(float NewLimitFPS) {
}

void USN2SettingsLocal::RunAutoBenchmark(bool bSaveImmediately) {
}

USN2PerformanceSettings* USN2SettingsLocal::GetPerformanceSettings() {
    return NULL;
}

float USN2SettingsLocal::GetFrameRateLimitActual() {
    return 0.0f;
}

FString USN2SettingsLocal::GetDesiredDeviceProfileQualitySuffix() const {
    return TEXT("");
}

bool USN2SettingsLocal::CanRunAutoBenchmark() const {
    return false;
}


