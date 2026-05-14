#include "UWESweepTestEnforceComponent.h"

UUWESweepTestEnforceComponent::UUWESweepTestEnforceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapColliderTag = TEXT("UWESweepTestEnforceComponent_OverlapCollider");
}


