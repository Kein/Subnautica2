#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ESN2EnableChromaticAberrationSetting.h"
#include "ESN2EnableLensFlareSetting.h"
#include "ESN2EnableMotionBlurSetting.h"
#include "ESN2EnableUnderwaterBlurSetting.h"
#include "EUpscalingMethod.h"
#include "OnScalabilitySettingsChangedDelegate.h"
#include "SN2SettingsLocal.generated.h"

class USN2PerformanceSettings;
class USN2SettingsShared;

UCLASS(Config=Engine)
class SUBNAUTICA2_API USN2SettingsLocal : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bDesiredHeadphoneMode;
    
    UPROPERTY(BlueprintAssignable)
    FOnScalabilitySettingsChanged OnScalabilitySettingsChanged;
    
private:
    UPROPERTY()
    USN2PerformanceSettings* PerformanceSettings;
    
    UPROPERTY()
    USN2SettingsShared* SharedSettings;
    
    UPROPERTY(Config)
    FString DesiredUserChosenDeviceProfileSuffix;
    
    UPROPERTY(Config)
    int32 ROGAllyCustomModeEnabled;
    
    UPROPERTY(Transient)
    FString CurrentAppliedDeviceProfile;
    
    UPROPERTY(Config)
    float FrameRateLimit_OnBattery;
    
    UPROPERTY(Config)
    float FrameRateLimit_InMenu;
    
    UPROPERTY(Config)
    float FrameRateLimit_WhenBackgrounded;
    
    UPROPERTY(Config)
    EUpscalingMethod UpscalingMethod;
    
    UPROPERTY(Config)
    int32 TSRQualityMode;
    
    UPROPERTY(Config)
    int32 DLSSQualityMode;
    
    UPROPERTY(Config)
    float DynamicResFrameTime;
    
    UPROPERTY(Config)
    int32 UpscalingFrameGeneration;
    
    UPROPERTY(Config)
    float ResolutionScaleFixed;
    
    UPROPERTY(Config)
    float ResolutionScaleDLSS;
    
    UPROPERTY(Config)
    float ResolutionScaleMin;
    
    UPROPERTY(Config)
    float ResolutionScaleMax;
    
    UPROPERTY(Config)
    bool bUseHeadphoneMode;
    
    UPROPERTY(Config)
    FString AudioOutputDeviceId;
    
    UPROPERTY(Config)
    float GammaValue;
    
    UPROPERTY(Config)
    ESN2EnableMotionBlurSetting EnableMotionBlur;
    
    UPROPERTY(Config)
    ESN2EnableChromaticAberrationSetting EnableChromaticAberration;
    
    UPROPERTY(Config)
    ESN2EnableLensFlareSetting EnableLensFlare;
    
    UPROPERTY(Config)
    ESN2EnableUnderwaterBlurSetting EnableUnderwaterBlur;
    
public:
    USN2SettingsLocal();

    UFUNCTION(BlueprintPure)
    bool ShouldRunAutoBenchmarkAtStartup() const;
    
    UFUNCTION(BlueprintCallable)
    void SetQualityModeImmediate(bool bQualityMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRateLimitImmediate(float NewLimitFPS);
    
    UFUNCTION(BlueprintCallable)
    void RunAutoBenchmark(bool bSaveImmediately);
    
    UFUNCTION(BlueprintCallable)
    USN2PerformanceSettings* GetPerformanceSettings();
    
    UFUNCTION(BlueprintPure)
    float GetFrameRateLimitActual();
    
    UFUNCTION(BlueprintPure)
    FString GetDesiredDeviceProfileQualitySuffix() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRunAutoBenchmark() const;
    
};

