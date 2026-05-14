#include "SN2BuilderMoveAbility.h"
#include "Net/UnrealNetwork.h"

USN2BuilderMoveAbility::USN2BuilderMoveAbility() {
    this->Ghost = NULL;
    this->PlaceholderGhost = NULL;
    this->UpdateSelectionTask = NULL;
}

void USN2BuilderMoveAbility::SpawnPlacementGhost(FSN2BuilderGhostParams GhostParams, FSN2ConstructableParams ConstructableParams) {
}

void USN2BuilderMoveAbility::ServerStartMove_Implementation(AActor* InMoveActor) {
}

void USN2BuilderMoveAbility::ServerMove_Implementation(FTransform Transform, FRotator FRotator, FSN2GhostPlacement GhostPlacement) {
}

void USN2BuilderMoveAbility::ServerCancelMove_Implementation() {
}

void USN2BuilderMoveAbility::OnRep_PlaceholderGhost() {
}

void USN2BuilderMoveAbility::ClientSetStartMoveState_Implementation(const FStartMoveState MoveState) {
}

bool USN2BuilderMoveAbility::AbilityIsActive() const {
    return false;
}

void USN2BuilderMoveAbility::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2BuilderMoveAbility, PlaceholderGhost);
}


