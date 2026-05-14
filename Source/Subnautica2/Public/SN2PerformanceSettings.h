#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "Engine/PlatformSettings.h"
#include "SN2PerformanceSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SUBNAUTICA2_API USN2PerformanceSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> DesktopFrameRateLimits;
    
private:
    UPROPERTY(EditAnywhere)
    FPerPlatformSettings PerPlatformSettings;
    
public:
    USN2PerformanceSettings();

};

