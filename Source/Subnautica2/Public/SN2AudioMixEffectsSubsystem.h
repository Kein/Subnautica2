#pragma once
#include "CoreMinimal.h"
#include "UWEClientWorldSubsystem.h"
#include "SN2AudioMixEffectsSubsystem.generated.h"

class USoundControlBus;
class USoundControlBusMix;

UCLASS()
class SUBNAUTICA2_API USN2AudioMixEffectsSubsystem : public UUWEClientWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USoundControlBusMix* DefaultBaseMix;
    
    UPROPERTY(Transient)
    USoundControlBusMix* LoadingScreenMix;
    
    UPROPERTY(Transient)
    USoundControlBusMix* UserMix;
    
    UPROPERTY(Transient)
    USoundControlBus* OverallControlBus;
    
    UPROPERTY(Transient)
    USoundControlBus* MusicControlBus;
    
    UPROPERTY(Transient)
    USoundControlBus* SoundFXControlBus;
    
    UPROPERTY(Transient)
    USoundControlBus* DialogueControlBus;
    
    UPROPERTY(Transient)
    USoundControlBus* CinematicsControlBus;
    
public:
    USN2AudioMixEffectsSubsystem();

};

