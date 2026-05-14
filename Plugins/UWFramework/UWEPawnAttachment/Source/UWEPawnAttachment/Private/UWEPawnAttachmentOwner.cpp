#include "UWEPawnAttachmentOwner.h"
#include "Net/UnrealNetwork.h"

UUWEPawnAttachmentOwner::UUWEPawnAttachmentOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
    this->DisableServerConfirmation = false;
}

void UUWEPawnAttachmentOwner::OnAttachmentOwnerPlayMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

bool UUWEPawnAttachmentOwner::IsSlotOccupied(const FName& SlotName) {
    return false;
}

bool UUWEPawnAttachmentOwner::IsAttached_BP(AActor* Attachment) {
    return false;
}

bool UUWEPawnAttachmentOwner::IsAnySlotAnimating() const {
    return false;
}

bool UUWEPawnAttachmentOwner::InitiateDetachmentBySlot_BP(const FName& SlotName, bool CheckIfAlreadyDetached, bool FastForward) {
    return false;
}

bool UUWEPawnAttachmentOwner::InitiateDetachmentByActor_BP(AActor* Attachment, bool CheckIfAlreadyDetached, bool FastForward) {
    return false;
}

bool UUWEPawnAttachmentOwner::InitiateAttachmentToClosestAvailableSlot_BP(AActor* Attachment) {
    return false;
}

bool UUWEPawnAttachmentOwner::InitiateAttachment_BP(AActor* Attachment, const FName& SlotName) {
    return false;
}

bool UUWEPawnAttachmentOwner::InitiateAllDetachment_BP(bool FastForward) {
    return false;
}

FTransform UUWEPawnAttachmentOwner::GetAttachedPawnTransform() const {
    return FTransform{};
}

int32 UUWEPawnAttachmentOwner::GetAttachedPawnsCount() const {
    return 0;
}

TArray<AActor*> UUWEPawnAttachmentOwner::GetAttachedPawns() const {
    return TArray<AActor*>();
}

bool UUWEPawnAttachmentOwner::CanAttachAnywhere_BP(AActor* Attachment) {
    return false;
}

bool UUWEPawnAttachmentOwner::CanAttach_BP(AActor* Attachment, const FName& SlotName) {
    return false;
}

void UUWEPawnAttachmentOwner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPawnAttachmentOwner, ReplicationStates);
}


