#include "MerNavGraphRenderingComponent.h"

UMerNavGraphRenderingComponent::UMerNavGraphRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->bDrawChunkBounds = false;
}


