#include "UWEBaseLockComponent.h"
#include "Net/UnrealNetwork.h"

UUWEBaseLockComponent::UUWEBaseLockComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WasLoaded = false;
    this->LockState = EUWELockState::Unset;
    this->UnlockedDialogue = NULL;
    this->UnlockFailedDialogue = NULL;
    this->SaveHandle = NULL;
}

bool UUWEBaseLockComponent::TryUnlock(APawn* ForPlayer) {
    return false;
}

void UUWEBaseLockComponent::OnRep_WasLoaded() {
}

void UUWEBaseLockComponent::OnRep_LockState() {
}

void UUWEBaseLockComponent::Lock() {
}

bool UUWEBaseLockComponent::IsLocked() const {
    return false;
}

bool UUWEBaseLockComponent::CanUnlock(FUWELockFailedReason& Reason, APawn* ForPlayer) const {
    return false;
}

void UUWEBaseLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEBaseLockComponent, WasLoaded);
    DOREPLIFETIME(UUWEBaseLockComponent, LockState);
}


