#include "MercunaGroundNavInvokerComponent.h"

UMercunaGroundNavInvokerComponent::UMercunaGroundNavInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAutomatic = true;
    this->NavGrid = NULL;
    this->GenerationRadius = 3000.00f;
    this->RemovalRadius = 5000.00f;
}


