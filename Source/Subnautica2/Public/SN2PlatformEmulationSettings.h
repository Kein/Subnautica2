#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "GameplayTagContainer.h"
#include "SN2PlatformEmulationSettings.generated.h"

UCLASS(MinimalAPI, Config=EditorPerProjectUserSettings)
class USN2PlatformEmulationSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer AdditionalPlatformTraitsToEnable;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTagContainer AdditionalPlatformTraitsToSuppress;
    
    UPROPERTY(Config, EditAnywhere)
    FName PretendPlatform;
    
    UPROPERTY(Config, EditAnywhere)
    FName PretendBaseDeviceProfile;
    
    UPROPERTY(Config, EditAnywhere)
    bool bApplyFrameRateSettingsInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool bApplyFrontEndPerformanceOptionsInPIE;
    
    UPROPERTY(Config, EditAnywhere)
    bool bApplyDeviceProfilesInPIE;
    
public:
    USN2PlatformEmulationSettings();

private:
    UFUNCTION()
    TArray<FName> GetKnownPlatformIds() const;
    
    UFUNCTION()
    TArray<FName> GetKnownDeviceProfiles() const;
    
};

