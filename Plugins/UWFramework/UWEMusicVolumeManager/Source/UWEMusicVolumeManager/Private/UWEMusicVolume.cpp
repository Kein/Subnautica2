#include "UWEMusicVolume.h"
#include "UWEMusicVolumeComponent.h"

AUWEMusicVolume::AUWEMusicVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MusicVolumeComponent = CreateDefaultSubobject<UUWEMusicVolumeComponent>(TEXT("MusicVolume"));
}


