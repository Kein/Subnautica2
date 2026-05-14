#include "UWEGameCapturePawn.h"
#include "Net/UnrealNetwork.h"

AUWEGameCapturePawn::AUWEGameCapturePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddDefaultMovementBindings = false;
    this->PreviousPawn = NULL;
    this->AttachedObject = NULL;
}

void AUWEGameCapturePawn::OnRep_PreviousPawn() const {
}

void AUWEGameCapturePawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEGameCapturePawn, PreviousPawn);
}


