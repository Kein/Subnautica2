#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "SN2SubmixEffectChainMap.h"
#include "SN2AudioSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SUBNAUTICA2_API USN2AudioSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultControlBusMix;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath LoadingScreenControlBusMix;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath UserSettingsControlBusMix;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath OverallVolumeControlBus;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath MusicVolumeControlBus;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath SoundFXVolumeControlBus;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DialogueVolumeControlBus;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath CinematicsVolumeControlBus;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSN2SubmixEffectChainMap> HDRAudioSubmixEffectChain;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSN2SubmixEffectChainMap> LDRAudioSubmixEffectChain;
    
    USN2AudioSettings();

};

