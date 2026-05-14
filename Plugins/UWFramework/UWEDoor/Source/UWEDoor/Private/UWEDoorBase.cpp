#include "UWEDoorBase.h"
#include "UWEGenericLockComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEDoorBase::AUWEDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsOpen = false;
    this->bWantsToOpen = false;
    this->bWaitForAnimation = false;
    this->OpenCurve = NULL;
    this->OpenSpeed = 1.00f;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->LockComponent = CreateDefaultSubobject<UUWEGenericLockComponent>(TEXT("LockComponent"));
    this->SaveHandle = NULL;
}

void AUWEDoorBase::UnlockAndOpen(APawn* TriggeringActor) {
}

void AUWEDoorBase::Unlock_Implementation(APawn* TriggeringActor) {
}

void AUWEDoorBase::ToggleOpen() {
}

void AUWEDoorBase::Open_Implementation() {
}

void AUWEDoorBase::OnStoryGoalUnlocked(UUWEStoryGoal* lockedStoryGoal, AActor* ReceivingActor) {
}

void AUWEDoorBase::OnRep_IsOpen() {
}


void AUWEDoorBase::Lock_Implementation() {
}

void AUWEDoorBase::CloseAndLock() {
}

void AUWEDoorBase::Close_Implementation() {
}

void AUWEDoorBase::CanUnlock(bool& Result, APawn* TriggeringActor) {
}

void AUWEDoorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEDoorBase, bIsOpen);
    DOREPLIFETIME(AUWEDoorBase, bWantsToOpen);
}


