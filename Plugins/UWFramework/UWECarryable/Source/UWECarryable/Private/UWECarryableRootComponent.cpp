#include "UWECarryableRootComponent.h"

UUWECarryableRootComponent::UUWECarryableRootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->InventoryUpdateRate = 1.00f;
}


