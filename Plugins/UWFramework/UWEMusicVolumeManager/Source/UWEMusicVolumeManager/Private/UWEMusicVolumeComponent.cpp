#include "UWEMusicVolumeComponent.h"

UUWEMusicVolumeComponent::UUWEMusicVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Config = NULL;
    this->Priority = 0;
    this->Layer = EUWEMusicVolumeLayer::Music;
}

void UUWEMusicVolumeComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UUWEMusicVolumeComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


