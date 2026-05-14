#include "MercunaNavigationComponent.h"

UMercunaNavigationComponent::UMercunaNavigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MovementAdapter = NULL;
    this->AvoidanceMode = EMercunaAvoidanceMode::ORCA;
    this->DynamicAvoidance = true;
    this->AvoidanceWeightMultiplier = 1.00f;
    this->CurrentPath = NULL;
    this->CurrentController = NULL;
}


