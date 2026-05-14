#include "UWEBaseCellLockComponent.h"
#include "Net/UnrealNetwork.h"

UUWEBaseCellLockComponent::UUWEBaseCellLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LockGroupID = -1;
    this->SaveHandle = NULL;
}

void UUWEBaseCellLockComponent::OnRep_OwnerGuid() {
}

void UUWEBaseCellLockComponent::OnRep_BaseGuid() {
}

void UUWEBaseCellLockComponent::OnBasesReplicated() {
}

TSet<FIntVector> UUWEBaseCellLockComponent::GetLockedCells() const {
    return TSet<FIntVector>();
}

FGameplayTag UUWEBaseCellLockComponent::GetCenterCellBrushType() const {
    return FGameplayTag{};
}

FIntVector UUWEBaseCellLockComponent::GetCenterCell() const {
    return FIntVector{};
}

AUWESculpturalBaseActor* UUWEBaseCellLockComponent::GetBase() const {
    return NULL;
}

void UUWEBaseCellLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEBaseCellLockComponent, BaseGUID);
    DOREPLIFETIME(UUWEBaseCellLockComponent, LockGroupID);
    DOREPLIFETIME(UUWEBaseCellLockComponent, OwnerGuid);
}


