#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UWEAudioManagerSubsystem.generated.h"

class UFMODEvent;

UCLASS()
class UWEAUDIO_API UUWEAudioManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UFMODEvent*> FMODEvents;
    
public:
    UUWEAudioManagerSubsystem();

};

