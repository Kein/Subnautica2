#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "UWEMusicVolume.generated.h"

class UUWEMusicVolumeComponent;

UCLASS()
class UWEMUSICVOLUMEMANAGER_API AUWEMusicVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UUWEMusicVolumeComponent* MusicVolumeComponent;
    
public:
    AUWEMusicVolume(const FObjectInitializer& ObjectInitializer);

};

