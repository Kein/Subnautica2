#include "SN2AbilityTask_UpdateDeconstructGroupSelection.h"

USN2AbilityTask_UpdateDeconstructGroupSelection::USN2AbilityTask_UpdateDeconstructGroupSelection() {
    this->HoveredActorGhost = NULL;
    this->GhostMaterial = NULL;
    this->OverlayMaterial = NULL;
    this->EditAction = NULL;
    this->IsPaused = false;
}

USN2AbilityTask_UpdateDeconstructGroupSelection* USN2AbilityTask_UpdateDeconstructGroupSelection::UpdateDeconstructGroupSelection(UUWEGameplayAbility* OwningAbility) {
    return NULL;
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::ShowFeedback() {
}

bool USN2AbilityTask_UpdateDeconstructGroupSelection::ShouldDeconstructTargetActor(FGameplayTag& CantDeconstructReason) {
    return false;
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::SetGroupSelectionEnabled(bool Enabled) {
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::ResumeTask() {
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::RestoreHoveredActorHiddenState() {
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::PauseTask() {
}

bool USN2AbilityTask_UpdateDeconstructGroupSelection::IsLegal() {
    return false;
}

void USN2AbilityTask_UpdateDeconstructGroupSelection::HideFeedback() {
}

FTransform USN2AbilityTask_UpdateDeconstructGroupSelection::GetSpawnTransform() {
    return FTransform{};
}

AActor* USN2AbilityTask_UpdateDeconstructGroupSelection::GetHoveredActor() {
    return NULL;
}

TScriptInterface<IUWEBaseEditAction> USN2AbilityTask_UpdateDeconstructGroupSelection::GetEditAction() {
    return NULL;
}

TArray<FUWESculpturalBaseCellCost> USN2AbilityTask_UpdateDeconstructGroupSelection::GetCost() {
    return TArray<FUWESculpturalBaseCellCost>();
}

float USN2AbilityTask_UpdateDeconstructGroupSelection::GetBuildTime() {
    return 0.0f;
}


