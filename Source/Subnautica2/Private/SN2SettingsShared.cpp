#include "SN2SettingsShared.h"

USN2SettingsShared::USN2SettingsShared() {
    this->ControlBusMix = NULL;
    this->bSoundControlBusMixLoaded = false;
    this->AllowAudioInBackground = ESN2AllowBackgroundAudioSetting::Off;
    this->ControllerLayout = ESN2ControllerLayoutSetting::Classic;
    this->MouseSensitivityX = 0.50f;
    this->MouseSensitivityY = 0.50f;
    this->ControllerSensitivityX = 0.80f;
    this->ControllerSensitivityY = 0.80f;
    this->ControllerForceFeedbackSensitivity = 1.00f;
    this->ControllerInvertedY = false;
    this->MouseInvertedY = false;
    this->ControllerOrientation = ESN2ControllerOrientation::Default;
    this->SwapControllerSticks = false;
    this->PickupForceFeedback = true;
    this->LargeTextEnabled = false;
    this->ApplicationScaleNormalized = 0.50f;
    this->ColorDeficiencyType = EColorVisionDeficiency::NormalVision;
    this->OverallVolume = 1.00f;
    this->MusicVolume = 1.00f;
    this->SoundFXVolume = 1.00f;
    this->DialogueVolume = 1.00f;
    this->CinematicsVolume = 1.00f;
    this->EnableCrashReporting = true;
    this->EnableAnalytics = true;
    this->EnableAutoSaves = true;
    this->EnableProfanityFilter = true;
    this->bCameraSwimBobbing = true;
    this->bShowOutlines = true;
    this->GammaValue = 2.20f;
    this->EnableMotionBlur = ESN2EnableMotionBlurSetting::On;
    this->EnableChromaticAberration = ESN2EnableChromaticAberrationSetting::Off;
    this->EnableLensFlare = ESN2EnableLensFlareSetting::Off;
    this->EnableUnderwaterBlur = ESN2EnableUnderwaterBlurSetting::Off;
}


