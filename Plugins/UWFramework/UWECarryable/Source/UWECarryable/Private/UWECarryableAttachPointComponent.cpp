#include "UWECarryableAttachPointComponent.h"
#include "Net/UnrealNetwork.h"

UUWECarryableAttachPointComponent::UUWECarryableAttachPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->ShapeBodySetup = NULL;
    this->SaveHandle = NULL;
}

void UUWECarryableAttachPointComponent::OnRep_AttachedActor(TWeakObjectPtr<AActor> OldAttachedActor) {
}

void UUWECarryableAttachPointComponent::OnPostPickedUpItem(AActor* PickupActor) {
}

void UUWECarryableAttachPointComponent::OnPhysicsWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UUWECarryableAttachPointComponent::OnOwnerDestroyed(AActor* DestroyedActor) {
}

void UUWECarryableAttachPointComponent::OnAttachedDestroyed(AActor* Actor) {
}

bool UUWECarryableAttachPointComponent::IsOccupied() const {
    return false;
}

bool UUWECarryableAttachPointComponent::DetachCarryable() {
    return false;
}

bool UUWECarryableAttachPointComponent::AttachCarryable(AActor* Actor) {
    return false;
}

void UUWECarryableAttachPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWECarryableAttachPointComponent, AttachedActor);
}


