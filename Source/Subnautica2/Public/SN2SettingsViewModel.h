#pragma once
#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.h"
#include "AudioMixerBlueprintLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameUserSettings.h"
#include "MVVMViewModelBase.h"
#include "Components/SlateWrapperTypes.h"
#include "EPlatform.h"
#include "ESettingsTab.h"
#include "SN2SettingsViewModel.generated.h"

class USN2LocalPlayer;
class USN2SettingsDebug;
class USN2SettingsLocal;
class USN2SettingsShared;

UCLASS()
class SUBNAUTICA2_API USN2SettingsViewModel : public UMVVMViewModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsRunningHardwareBenchmark;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsSettingsMenuOpen;
    
    UPROPERTY(BlueprintReadWrite)
    FIntPoint ScreenResolution;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ScreenResolutionIndex;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility GranularQualitySettingsSectionVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> TSRFramerateTargetValues;
    
protected:
    UPROPERTY()
    USN2LocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    FName ActiveTab;
    
    UPROPERTY(BlueprintReadWrite)
    FText CurrentSettingTitle;
    
    UPROPERTY(BlueprintReadWrite)
    FText CurrentSettingDescription;
    
    UPROPERTY(BlueprintReadOnly)
    EPlatform CurrentPlatform;
    
    UPROPERTY(BlueprintReadWrite)
    float CinematicsVolume;
    
    UPROPERTY(BlueprintReadWrite)
    int32 WindowModeUIIndex;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TEnumAsByte<EWindowMode::Type>> AvailableWindowModes;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FText> AvailableResolutionLabels;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FText> AvailableFrameRates;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FramerateIndex;
    
    UPROPERTY(BlueprintReadWrite)
    bool VerticalSyncEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    bool VerticalSyncButtonEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool MotionBlurEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool ChromaticAberrationEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool LensFlareEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool UnderwaterBlurEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    int32 UpscalingMethod;
    
    UPROPERTY(BlueprintReadOnly)
    int32 UpscalingMethodSectionIndex;
    
    UPROPERTY(BlueprintReadWrite)
    float ResolutionScale;
    
    UPROPERTY(BlueprintReadWrite)
    float ResolutionScaleMin;
    
    UPROPERTY(BlueprintReadWrite)
    float ResolutionScaleMax;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEnableMinMaxResolutionScale;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TSRQualityMode;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TSRFramerateIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DLSSQualityMode;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FSRUpscalingQuality;
    
    UPROPERTY(BlueprintReadWrite)
    bool FrameGenerationEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility FrameGenerationEnabledVisibility;
    
    UPROPERTY(BlueprintReadWrite)
    bool FrameGenerationModeAlwaysOn;
    
    UPROPERTY(BlueprintReadOnly)
    ESlateVisibility FrameGenerationModeVisibility;
    
    UPROPERTY(BlueprintReadWrite)
    int32 QualityModeEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    FString BaseProfileName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ROGAllyCustomModeEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SteamDeckCustomModeEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    int32 OverallQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 GlobalIlluminationQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ViewDistanceQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TextureQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 VisualEffectQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ReflectionQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PostProcessingQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ShadingQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FoliageQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LandscapeQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CloudsQuality;
    
    UPROPERTY(BlueprintReadWrite)
    float OverallVolume;
    
    UPROPERTY(BlueprintReadWrite)
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite)
    float SoundFXVolume;
    
    UPROPERTY(BlueprintReadWrite)
    float DialogueVolume;
    
    UPROPERTY(BlueprintReadWrite)
    bool AllowAudioInBackground;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FAudioOutputDeviceInfo> AvailableAudioDevices;
    
    UPROPERTY(BlueprintReadOnly)
    FString ActiveAudioDeviceId;
    
    UPROPERTY(BlueprintReadWrite)
    double MouseSensitivityX;
    
    UPROPERTY(BlueprintReadWrite)
    double MouseSensitivityY;
    
    UPROPERTY(BlueprintReadWrite)
    double ControllerSensitivityX;
    
    UPROPERTY(BlueprintReadWrite)
    double ControllerSensitivityY;
    
    UPROPERTY(BlueprintReadWrite)
    double ControllerForceFeedbackSensitivity;
    
    UPROPERTY(BlueprintReadWrite)
    bool ControllerInvertedY;
    
    UPROPERTY(BlueprintReadWrite)
    bool MouseInvertedY;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ControllerOrientation;
    
    UPROPERTY(BlueprintReadWrite)
    bool SwapControllerSticks;
    
    UPROPERTY(BlueprintReadWrite)
    bool PickupForceFeedback;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentCulture;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FText> Cultures;
    
    UPROPERTY(BlueprintReadWrite)
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite)
    bool LargeTextEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    float NormalizedApplicationScale;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ColorDeficiencyType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ControllerLayoutSetting;
    
    UPROPERTY()
    USN2SettingsDebug* DebugSettings;
    
    UPROPERTY()
    USN2SettingsShared* SharedSettings;
    
    UPROPERTY()
    USN2SettingsLocal* LocalSettings;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsGraphicsSettingsDirty;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsVideoSettingsDirty;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShouldNotifyRestartIsNeeded;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsCrashReportingEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAnalyticsEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAutoSaveEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsProfanityFilterEnabled;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FText> InputPrompts;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsTwitchAccountLinked;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsSonarConnected;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCameraSwimBobbing;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShowOutlines;
    
public:
    USN2SettingsViewModel();

    UFUNCTION(BlueprintCallable)
    void UpdateAvailableFramerates();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllAvailableResolutions();
    
    UFUNCTION(BlueprintCallable)
    void StorePriorValues();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUpscalingMethod(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTwitchAccountStatus(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSonarConnectionVisibility(bool InValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetActiveAudioOutputDevice(const FString& AudioDeviceId);
    
    UFUNCTION(BlueprintCallable)
    void RunHardwareBenchmark();
    
    UFUNCTION(BlueprintCallable)
    void RevertToPriorVideoSettings();
    
    UFUNCTION(BlueprintCallable)
    void RevertGraphicsSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSettings(const ESettingsTab SettingsTab);
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerSettings();
    
    UFUNCTION(BlueprintCallable)
    int32 RefreshWindowModeSelectionAndAvailableResolutions(bool bAllowCustomWindowSize, bool bCalledFromTimer);
    
    UFUNCTION(BlueprintCallable)
    void KeepVideoSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeRemappings();
    
public:
    UFUNCTION()
    void HandleOnSystemResolutionChanged(uint32 ResX, uint32 ResY);
    
    UFUNCTION()
    void HandleOnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult);
    
    UFUNCTION()
    void HandleMainAudioOutputDeviceObtained(const FString& CurrentDevice);
    
    UFUNCTION()
    void HandleAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& ObtainedDevices);
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetUpscalingMethod() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetResolutionScaleMinRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetResolutionScaleMaxRange() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsDLSSSupported();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetIsDLAAModeCompatible();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetDidDefaultsChange(const ESettingsTab SettingsTab) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGraphicsSettings();
    
};

