#include "SN2SettingsViewModel.h"

USN2SettingsViewModel::USN2SettingsViewModel() {
    this->bIsRunningHardwareBenchmark = false;
    this->bIsSettingsMenuOpen = false;
    this->ScreenResolutionIndex = -1;
    this->GranularQualitySettingsSectionVisibility = ESlateVisibility::Visible;
    this->TSRFramerateTargetValues.AddDefaulted(2);
    this->LocalPlayer = NULL;
    this->CurrentPlatform = EPlatform::Undefined;
    this->CinematicsVolume = 0.00f;
    this->WindowModeUIIndex = -1;
    this->FramerateIndex = -1;
    this->VerticalSyncEnabled = false;
    this->VerticalSyncButtonEnabled = false;
    this->MotionBlurEnabled = false;
    this->ChromaticAberrationEnabled = false;
    this->LensFlareEnabled = false;
    this->UnderwaterBlurEnabled = false;
    this->UpscalingMethod = 1;
    this->UpscalingMethodSectionIndex = 1;
    this->ResolutionScale = 1.00f;
    this->ResolutionScaleMin = 0.50f;
    this->ResolutionScaleMax = 1.00f;
    this->bEnableMinMaxResolutionScale = false;
    this->TSRQualityMode = -1;
    this->TSRFramerateIndex = -1;
    this->DLSSQualityMode = -1;
    this->FSRUpscalingQuality = -1;
    this->FrameGenerationEnabled = false;
    this->FrameGenerationEnabledVisibility = ESlateVisibility::Visible;
    this->FrameGenerationModeAlwaysOn = false;
    this->FrameGenerationModeVisibility = ESlateVisibility::Visible;
    this->QualityModeEnabled = 0;
    this->ROGAllyCustomModeEnabled = 0;
    this->SteamDeckCustomModeEnabled = 0;
    this->OverallQuality = -1;
    this->GlobalIlluminationQuality = 0;
    this->ShadowQuality = 0;
    this->AntiAliasingQuality = 0;
    this->ViewDistanceQuality = 0;
    this->TextureQuality = 0;
    this->VisualEffectQuality = 0;
    this->ReflectionQuality = 0;
    this->PostProcessingQuality = 0;
    this->ShadingQuality = 0;
    this->FoliageQuality = 0;
    this->LandscapeQuality = 0;
    this->CloudsQuality = 0;
    this->OverallVolume = 0.00f;
    this->MusicVolume = 0.00f;
    this->SoundFXVolume = 0.00f;
    this->DialogueVolume = 0.00f;
    this->AllowAudioInBackground = false;
    this->MouseSensitivityX = 0.00f;
    this->MouseSensitivityY = 0.00f;
    this->ControllerSensitivityX = 0.00f;
    this->ControllerSensitivityY = 0.00f;
    this->ControllerForceFeedbackSensitivity = 0.00f;
    this->ControllerInvertedY = false;
    this->MouseInvertedY = false;
    this->ControllerOrientation = 0;
    this->SwapControllerSticks = false;
    this->PickupForceFeedback = false;
    this->CurrentCulture = 0;
    this->Gamma = 2.20f;
    this->LargeTextEnabled = false;
    this->NormalizedApplicationScale = 0.50f;
    this->ColorDeficiencyType = 0;
    this->ControllerLayoutSetting = 0;
    this->DebugSettings = NULL;
    this->SharedSettings = NULL;
    this->LocalSettings = NULL;
    this->bIsGraphicsSettingsDirty = false;
    this->bIsVideoSettingsDirty = false;
    this->bShouldNotifyRestartIsNeeded = false;
    this->IsCrashReportingEnabled = false;
    this->IsAnalyticsEnabled = false;
    this->IsAutoSaveEnabled = false;
    this->IsProfanityFilterEnabled = false;
    this->IsTwitchAccountLinked = false;
    this->IsSonarConnected = false;
    this->bCameraSwimBobbing = true;
    this->bShowOutlines = true;
}

void USN2SettingsViewModel::UpdateAvailableFramerates() {
}

void USN2SettingsViewModel::UpdateAllAvailableResolutions() {
}

void USN2SettingsViewModel::StorePriorValues() {
}

void USN2SettingsViewModel::SetUpscalingMethod(int32 InValue) {
}

void USN2SettingsViewModel::SetTwitchAccountStatus(bool InValue) {
}

void USN2SettingsViewModel::SetSonarConnectionVisibility(bool InValue) {
}

void USN2SettingsViewModel::SetActiveAudioOutputDevice(const FString& AudioDeviceId) {
}

void USN2SettingsViewModel::RunHardwareBenchmark() {
}

void USN2SettingsViewModel::RevertToPriorVideoSettings() {
}

void USN2SettingsViewModel::RevertGraphicsSettings() {
}

void USN2SettingsViewModel::ResetSettings(const ESettingsTab SettingsTab) {
}

void USN2SettingsViewModel::ResetControllerSettings() {
}

int32 USN2SettingsViewModel::RefreshWindowModeSelectionAndAvailableResolutions(bool bAllowCustomWindowSize, bool bCalledFromTimer) {
    return 0;
}

void USN2SettingsViewModel::KeepVideoSettings() {
}

void USN2SettingsViewModel::InitializeRemappings() {
}

void USN2SettingsViewModel::HandleOnSystemResolutionChanged(uint32 ResX, uint32 ResY) {
}

void USN2SettingsViewModel::HandleOnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult) {
}

void USN2SettingsViewModel::HandleMainAudioOutputDeviceObtained(const FString& CurrentDevice) {
}

void USN2SettingsViewModel::HandleAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& ObtainedDevices) {
}

int32 USN2SettingsViewModel::GetUpscalingMethod() const {
    return 0;
}

float USN2SettingsViewModel::GetResolutionScaleMinRange() const {
    return 0.0f;
}

float USN2SettingsViewModel::GetResolutionScaleMaxRange() const {
    return 0.0f;
}

bool USN2SettingsViewModel::GetIsDLSSSupported() {
    return false;
}

bool USN2SettingsViewModel::GetIsDLAAModeCompatible() {
    return false;
}

bool USN2SettingsViewModel::GetDidDefaultsChange(const ESettingsTab SettingsTab) const {
    return false;
}

void USN2SettingsViewModel::ApplySettings() {
}

void USN2SettingsViewModel::ApplyGraphicsSettings() {
}


