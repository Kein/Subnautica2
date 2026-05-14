#include "MercunaSurfaceNavigationComponent.h"

UMercunaSurfaceNavigationComponent::UMercunaSurfaceNavigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavSurfaceGrid = NULL;
    this->bAutomaticSteeringParameters = true;
}

void UMercunaSurfaceNavigationComponent::UpdateDynamicSteeringParams(const FMercunaSurfaceNavigationDynamicSteeringParameters& NewDynamicSteeringParams) {
}

void UMercunaSurfaceNavigationComponent::TrackActor(AActor* Actor, float Distance, float Speed, FVector Offset, bool UsePartialPath, bool bUseEndActorOrientation) {
}

void UMercunaSurfaceNavigationComponent::Stop() {
}

void UMercunaSurfaceNavigationComponent::SteeringParametersChanged() {
}

void UMercunaSurfaceNavigationComponent::SetUsageSpec(FMercunaUsageSpec NewUsageSpec) {
}

void UMercunaSurfaceNavigationComponent::SetNavGridToBest() {
}

void UMercunaSurfaceNavigationComponent::SetNavGrid(AMercunaNavSurfaceGrid* NewNavSurfaceGrid) {
}

void UMercunaSurfaceNavigationComponent::SetAvoidanceAgainst(AActor* Actor, bool Enable) {
}

void UMercunaSurfaceNavigationComponent::SetAgentType(FMercunaSurfaceAgentType NewAgentType) {
}

void UMercunaSurfaceNavigationComponent::ResumeNavigation() {
}

void UMercunaSurfaceNavigationComponent::PauseNavigation() {
}

bool UMercunaSurfaceNavigationComponent::OverrideSpeedMultiplier(const float NewSpeedMultiplier) {
    return false;
}

void UMercunaSurfaceNavigationComponent::NavLinkComplete() {
}

void UMercunaSurfaceNavigationComponent::MoveToLocations(const TArray<FVector>& Destinations, FVector EndDirection, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercunaSurfaceNavigationComponent::MoveToLocation(const FVector& Destination, FVector EndDirection, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercunaSurfaceNavigationComponent::MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath, bool bUseEndActorOrientation) {
}

void UMercunaSurfaceNavigationComponent::InvalidateContextualSteeringParamsAgainstActor(AActor* Actor) {
}

void UMercunaSurfaceNavigationComponent::InvalidateContextualSteeringParams() {
}

FMercunaUsageSpec UMercunaSurfaceNavigationComponent::GetUsageSpec() const {
    return FMercunaUsageSpec{};
}

FMercunaSurfaceAgentType UMercunaSurfaceNavigationComponent::GetSurfaceAgentType() const {
    return FMercunaSurfaceAgentType{};
}

FMercunaSurfaceNavigationSteeringParameters UMercunaSurfaceNavigationComponent::GetSteeringParameters() const {
    return FMercunaSurfaceNavigationSteeringParameters{};
}

float UMercunaSurfaceNavigationComponent::GetRemainingPathLength() {
    return 0.0f;
}

void UMercunaSurfaceNavigationComponent::GetPathInfo(bool& Valid, float& DistanceToEnd) {
}

void UMercunaSurfaceNavigationComponent::GetNextNavLinkInfo(bool& bNextNavLinkFound, float& DistanceToNextNavLink, float& TimeToNextNavLink, FMercunaPathNavLinkInfo& NavLinkInfo, float MaxLookAhead) const {
}

void UMercunaSurfaceNavigationComponent::GetNextNavLink(bool& bNextNavLinkFound, float& DistanceToNextNavLink, float& TimeToNextNavLink, FVector& TraversalStart, FVector& TraversalEnd, AActor*& NavLinkActor, UMercunaNavLinkComponent*& NavLinkComponent, float MaxLookAhead) const {
}

AMercunaNavSurfaceGrid* UMercunaSurfaceNavigationComponent::GetNavGrid() const {
    return NULL;
}

FVector UMercunaSurfaceNavigationComponent::GetLookDirection() {
    return FVector{};
}

FMercunaSurfaceNavigationDynamicSteeringParameters UMercunaSurfaceNavigationComponent::GetDynamicSteeringParameters() const {
    return FMercunaSurfaceNavigationDynamicSteeringParameters{};
}

UMercunaPath* UMercunaSurfaceNavigationComponent::GetCurrentPath() {
    return NULL;
}

FMercunaSurfaceNavigationConfiguration UMercunaSurfaceNavigationComponent::GetConfiguration() const {
    return FMercunaSurfaceNavigationConfiguration{};
}

void UMercunaSurfaceNavigationComponent::ConfigureSteering(const FMercunaSurfaceNavigationSteeringParameters& NewSteering) {
}

void UMercunaSurfaceNavigationComponent::ConfigureMovement(EMercunaAvoidanceMode NewAvoidanceMode) {
}

void UMercunaSurfaceNavigationComponent::Configure(const FMercunaSurfaceNavigationConfiguration& NewConfiguration) {
}

void UMercunaSurfaceNavigationComponent::ClearAvoidanceExclusions() {
}

void UMercunaSurfaceNavigationComponent::CancelMovement() {
}

void UMercunaSurfaceNavigationComponent::AddDestinationLocation(FVector NextDestination, bool bSmoothTransition) {
}


