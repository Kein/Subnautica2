#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SN2LifepodSettings.generated.h"

class UDataLayerAsset;
class UFileMediaSource;

UCLASS(DefaultConfig, Config=Game)
class SUBNAUTICA2_API USN2LifepodSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataLayerAsset> SequenceLifepodDataLayer;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UDataLayerAsset> StaticLifepodDataLayer;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> LifepodVideo;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> LifepodVideoLowQuality;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> LifepodVideoWinGDK;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UFileMediaSource> LifepodVideoLowestQuality;
    
    USN2LifepodSettings();

};

