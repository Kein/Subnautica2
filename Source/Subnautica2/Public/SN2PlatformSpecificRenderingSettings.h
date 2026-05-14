#pragma once
#include "CoreMinimal.h"
#include "Engine/PlatformSettings.h"
#include "ESN2FramePacingMode.h"
#include "SN2QualityDeviceProfileVariant.h"
#include "SN2PlatformSpecificRenderingSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class USN2PlatformSpecificRenderingSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString DefaultDeviceProfileSuffix;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSN2QualityDeviceProfileVariant> UserFacingDeviceProfileOptions;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsGranularVideoQualitySettings;
    
    UPROPERTY(Config, EditAnywhere)
    bool bSupportsAutomaticVideoQualityBenchmark;
    
    UPROPERTY(Config, EditAnywhere)
    ESN2FramePacingMode FramePacingMode;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> MobileFrameRateLimits;
    
    USN2PlatformSpecificRenderingSettings();

};

