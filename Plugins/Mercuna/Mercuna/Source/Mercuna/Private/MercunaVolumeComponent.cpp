#include "MercunaVolumeComponent.h"

UMercunaVolumeComponent::UMercunaVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseAsOccluder = true;
    this->bUseEditorCompositing = true;
}


