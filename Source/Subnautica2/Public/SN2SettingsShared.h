#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Rendering/RenderingCommon.h"
#include "ESN2AllowBackgroundAudioSetting.h"
#include "ESN2ControllerLayoutSetting.h"
#include "ESN2ControllerOrientation.h"
#include "ESN2EnableChromaticAberrationSetting.h"
#include "ESN2EnableLensFlareSetting.h"
#include "ESN2EnableMotionBlurSetting.h"
#include "ESN2EnableUnderwaterBlurSetting.h"
#include "SN2SettingsShared.generated.h"

class USoundControlBus;
class USoundControlBusMix;

UCLASS()
class SUBNAUTICA2_API USN2SettingsShared : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, USoundControlBus*> ControlBusMap;
    
    UPROPERTY(Transient)
    USoundControlBusMix* ControlBusMix;
    
    UPROPERTY(Transient)
    bool bSoundControlBusMixLoaded;
    
    UPROPERTY()
    ESN2AllowBackgroundAudioSetting AllowAudioInBackground;
    
    UPROPERTY()
    ESN2ControllerLayoutSetting ControllerLayout;
    
    UPROPERTY()
    double MouseSensitivityX;
    
    UPROPERTY()
    double MouseSensitivityY;
    
    UPROPERTY()
    double ControllerSensitivityX;
    
    UPROPERTY()
    double ControllerSensitivityY;
    
    UPROPERTY()
    double ControllerForceFeedbackSensitivity;
    
    UPROPERTY()
    bool ControllerInvertedY;
    
    UPROPERTY()
    bool MouseInvertedY;
    
    UPROPERTY()
    ESN2ControllerOrientation ControllerOrientation;
    
    UPROPERTY()
    bool SwapControllerSticks;
    
    UPROPERTY()
    bool PickupForceFeedback;
    
    UPROPERTY()
    FString Culture;
    
    UPROPERTY()
    bool LargeTextEnabled;
    
    UPROPERTY()
    float ApplicationScaleNormalized;
    
    UPROPERTY()
    EColorVisionDeficiency ColorDeficiencyType;
    
    UPROPERTY()
    float OverallVolume;
    
    UPROPERTY()
    float MusicVolume;
    
    UPROPERTY()
    float SoundFXVolume;
    
    UPROPERTY()
    float DialogueVolume;
    
    UPROPERTY()
    float CinematicsVolume;
    
    UPROPERTY()
    bool EnableCrashReporting;
    
    UPROPERTY()
    bool EnableAnalytics;
    
    UPROPERTY()
    bool EnableAutoSaves;
    
    UPROPERTY()
    bool EnableProfanityFilter;
    
    UPROPERTY()
    bool bCameraSwimBobbing;
    
    UPROPERTY()
    bool bShowOutlines;
    
    UPROPERTY()
    float GammaValue;
    
    UPROPERTY()
    ESN2EnableMotionBlurSetting EnableMotionBlur;
    
    UPROPERTY()
    ESN2EnableChromaticAberrationSetting EnableChromaticAberration;
    
    UPROPERTY()
    ESN2EnableLensFlareSetting EnableLensFlare;
    
    UPROPERTY()
    ESN2EnableUnderwaterBlurSetting EnableUnderwaterBlur;
    
    UPROPERTY()
    FString UserChosenDeviceProfileSuffix;
    
public:
    USN2SettingsShared();

};

