#include "Mercuna3DNavigationComponent.h"

UMercuna3DNavigationComponent::UMercuna3DNavigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavOctree = NULL;
    this->bAutomaticRadius = true;
    this->NavigationRadius = 0.00f;
    this->Pathfinding = true;
}

void UMercuna3DNavigationComponent::TrackActor(AActor* Actor, float Distance, float Speed, FVector Offset) {
}

void UMercuna3DNavigationComponent::Stop() {
}

void UMercuna3DNavigationComponent::SteeringParametersChanged() {
}

void UMercuna3DNavigationComponent::SetUsageSpec(FMercunaUsageSpec NewUsageSpec) {
}

void UMercuna3DNavigationComponent::SetNavOctreeToBest() {
}

void UMercuna3DNavigationComponent::SetNavOctree(AMercunaNavOctree* NewNavOctree) {
}

void UMercuna3DNavigationComponent::SetAvoidanceAgainst(AActor* Actor, bool Enable) {
}

void UMercuna3DNavigationComponent::ResumeNavigation() {
}

void UMercuna3DNavigationComponent::PauseNavigation() {
}

bool UMercuna3DNavigationComponent::OverrideSpeedMultiplier(const float NewSpeedMultiplier) {
    return false;
}

void UMercuna3DNavigationComponent::MoveToLocations(const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercuna3DNavigationComponent::MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercuna3DNavigationComponent::MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath) {
}

void UMercuna3DNavigationComponent::LookInDirection(FVector Direction, float MaxPitch) {
}

void UMercuna3DNavigationComponent::LookAt(AActor* Actor, float MaxPitch) {
}

void UMercuna3DNavigationComponent::LookAlongAcceleration(float MaxPitch) {
}

void UMercuna3DNavigationComponent::IsReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UMercuna3DNavigationComponent::InvalidateContextualSteeringParamsAgainstActor(AActor* Actor) {
}

void UMercuna3DNavigationComponent::InvalidateContextualSteeringParams() {
}

FMercunaUsageSpec UMercuna3DNavigationComponent::GetUsageSpec() const {
    return FMercunaUsageSpec{};
}

float UMercuna3DNavigationComponent::GetRemainingPathLength() {
    return 0.0f;
}

void UMercuna3DNavigationComponent::GetPathInfo(bool& Valid, float& DistanceToEnd) {
}

AMercunaNavOctree* UMercuna3DNavigationComponent::GetNavOctree() const {
    return NULL;
}

UMercunaPath* UMercuna3DNavigationComponent::GetCurrentPath() {
    return NULL;
}

void UMercuna3DNavigationComponent::ConfigureMovement(bool bUsePathfinding, EMercunaAvoidanceMode NewAvoidanceMode) {
}

void UMercuna3DNavigationComponent::Configure(const FMercuna3DNavigationConfiguration& NewConfiguration) {
}

void UMercuna3DNavigationComponent::ClearAvoidanceExclusions() {
}

void UMercuna3DNavigationComponent::CancelMovement() {
}

void UMercuna3DNavigationComponent::CancelLookAt() {
}

void UMercuna3DNavigationComponent::AddDestinationLocation(FVector NextDestination) {
}


