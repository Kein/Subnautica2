#include "SN2AbilityTask_UpdateMoveSelection.h"

USN2AbilityTask_UpdateMoveSelection::USN2AbilityTask_UpdateMoveSelection() {
    this->MoveTarget = NULL;
    this->PlacedActorGhost = NULL;
}

USN2AbilityTask_UpdateMoveSelection* USN2AbilityTask_UpdateMoveSelection::UpdateMoveSelection(UUWEGameplayAbility* OwningAbility) {
    return NULL;
}

void USN2AbilityTask_UpdateMoveSelection::ResumeTask() {
}

void USN2AbilityTask_UpdateMoveSelection::RestoreHoveredActorHiddenState() {
}

void USN2AbilityTask_UpdateMoveSelection::PauseTask() {
}

bool USN2AbilityTask_UpdateMoveSelection::IsLegal() const {
    return false;
}


