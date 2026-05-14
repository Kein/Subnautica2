#include "SN2MovableComponent.h"
#include "Net/UnrealNetwork.h"

USN2MovableComponent::USN2MovableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovePlaceholderGhost = NULL;
    this->MoveStarted = false;
    this->SaveHandle = NULL;
}

bool USN2MovableComponent::StartMove() {
    return false;
}

void USN2MovableComponent::OnRep_Placement() {
}

void USN2MovableComponent::MulticastNotifyMoveStarted_Implementation() {
}

void USN2MovableComponent::MulticaseUpdatePhysics_Implementation(AActor* MovedActor) {
}

void USN2MovableComponent::Move(FTransform Transform, FRotator FRotator, FSN2GhostPlacement GhostPlacement) {
}

bool USN2MovableComponent::IsMoving() const {
    return false;
}

FSN2GhostPlacement USN2MovableComponent::GetPlacementForActor(AActor* Actor) {
    return FSN2GhostPlacement{};
}

void USN2MovableComponent::CancelMove() {
}

bool USN2MovableComponent::CanBeMoved() {
    return false;
}

void USN2MovableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2MovableComponent, MoveStarted);
    DOREPLIFETIME(USN2MovableComponent, Placement);
}


