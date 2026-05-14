#include "UWEInventoryRouterComponent.h"

UUWEInventoryRouterComponent::UUWEInventoryRouterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEInventoryRouterComponent::PredictPickupActor(AActor* Pickupable) {
}

void UUWEInventoryRouterComponent::PickupActor_Implementation(AActor* Pickupable, const FHitResult& HitResult) {
}

bool UUWEInventoryRouterComponent::CanPickUpActor(AActor* Pickupable, const FHitResult& HitResult, FGameplayTag& Reason) {
    return false;
}


