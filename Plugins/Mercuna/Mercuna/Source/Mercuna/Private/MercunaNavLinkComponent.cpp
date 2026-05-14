#include "MercunaNavLinkComponent.h"

UMercunaNavLinkComponent::UMercunaNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->bAutoRotation = true;
    this->bApplyToAllNavGrids = false;
    this->NavGrid = NULL;
    this->bEnabled = true;
    this->bInterGridLink = false;
}

void UMercunaNavLinkComponent::SetEnabled(bool NewBEnabled) {
}

bool UMercunaNavLinkComponent::InUse() const {
    return false;
}

FTransform UMercunaNavLinkComponent::GetRightTransform() const {
    return FTransform{};
}

FRotator UMercunaNavLinkComponent::GetRightRotation() const {
    return FRotator{};
}

FVector UMercunaNavLinkComponent::GetRightPosition() const {
    return FVector{};
}

FTransform UMercunaNavLinkComponent::GetLeftTransform() const {
    return FTransform{};
}

FRotator UMercunaNavLinkComponent::GetLeftRotation() const {
    return FRotator{};
}

FVector UMercunaNavLinkComponent::GetLeftPosition() const {
    return FVector{};
}

void UMercunaNavLinkComponent::AddToNavGrid(AMercunaNavGraph2D* NewNavGrid) {
}

void UMercunaNavLinkComponent::AddToAllGrids() {
}

void UMercunaNavLinkComponent::AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid) {
}


