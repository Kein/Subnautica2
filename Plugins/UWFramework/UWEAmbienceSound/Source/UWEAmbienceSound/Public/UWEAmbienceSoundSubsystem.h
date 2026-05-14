#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UWEAmbienceSoundSubsystem.generated.h"

class UUWEConditionalAmbienceSound;

UCLASS(DefaultConfig, Config=WEAmbienceSound)
class UWEAMBIENCESOUND_API UUWEAmbienceSoundSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UUWEConditionalAmbienceSound*> SoundInstances;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UUWEConditionalAmbienceSound>> AmbienceSounds;
    
    UUWEAmbienceSoundSubsystem();

virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UUWEAmbienceSoundSubsystem, STATGROUP_Tickables); }
};

