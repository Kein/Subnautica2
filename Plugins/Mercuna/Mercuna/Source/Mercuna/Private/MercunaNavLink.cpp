#include "MercunaNavLink.h"
#include "MercunaNavLinkComponent.h"

AMercunaNavLink::AMercunaNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMercunaNavLinkComponent>(TEXT("NavLinkComponent"));
    this->NavLinkComponent = (UMercunaNavLinkComponent*)RootComponent;
    this->bAutoRotation = true;
    this->bApplyToAllNavGrids = true;
    this->NavGrid = NULL;
    this->bEnabled = true;
    this->bInterGridLink = false;
}

void AMercunaNavLink::SetEnabled(bool NewBEnabled) {
}



bool AMercunaNavLink::InUse() const {
    return false;
}

FTransform AMercunaNavLink::GetRightTransform() const {
    return FTransform{};
}

FRotator AMercunaNavLink::GetRightRotation() const {
    return FRotator{};
}

FVector AMercunaNavLink::GetRightPosition() const {
    return FVector{};
}

FTransform AMercunaNavLink::GetLeftTransform() const {
    return FTransform{};
}

FRotator AMercunaNavLink::GetLeftRotation() const {
    return FRotator{};
}

FVector AMercunaNavLink::GetLeftPosition() const {
    return FVector{};
}

void AMercunaNavLink::AddToNavGrid(AMercunaNavGraph2D* NewNavGrid, FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags) {
}

void AMercunaNavLink::AddToAllGrids(FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags) {
}

void AMercunaNavLink::AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid, FMercunaNavigationLink NewLink, FMercunaSupportedAgentTypes NewSupportedAgentTypes, FMercunaUsageTypes NewUsageTypes, FGameplayTagContainer LinkTags) {
}


