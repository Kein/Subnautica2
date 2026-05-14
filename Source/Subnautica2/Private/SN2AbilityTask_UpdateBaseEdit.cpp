#include "SN2AbilityTask_UpdateBaseEdit.h"

USN2AbilityTask_UpdateBaseEdit::USN2AbilityTask_UpdateBaseEdit() {
    this->ActionData = NULL;
    this->EditActionLegality = EUWEEditActionLegality::Invalid_NotYetCalculated;
    this->ActorPreviewGhost = NULL;
}

bool USN2AbilityTask_UpdateBaseEdit::UseSoftLock() const {
    return false;
}

USN2AbilityTask_UpdateBaseEdit* USN2AbilityTask_UpdateBaseEdit::UpdateBaseEdit(UUWEGameplayAbility* OwningAbility, USN2ItemBrushActionData* NewActionData, ASN2BuilderGhost* NewGhost) {
    return NULL;
}

EBuilderSnapping USN2AbilityTask_UpdateBaseEdit::ToggleSnappingMode() {
    return EBuilderSnapping::Freeform;
}

void USN2AbilityTask_UpdateBaseEdit::ShowGhost() {
}

bool USN2AbilityTask_UpdateBaseEdit::ShouldToggleSnappingOnModeSwitch() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::ShouldSwitchToDeconstructOnActivate() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::ShouldSpawnActorOnly() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::ShouldRotateWithInput() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::ShouldCycleSelectionSize() const {
    return false;
}

void USN2AbilityTask_UpdateBaseEdit::ResumeTask() {
}

void USN2AbilityTask_UpdateBaseEdit::ResetFeedback() {
}

void USN2AbilityTask_UpdateBaseEdit::ResetEdit() {
}

void USN2AbilityTask_UpdateBaseEdit::PauseTask() {
}

bool USN2AbilityTask_UpdateBaseEdit::IsLegal() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::IsEmbeddingActor() const {
    return false;
}

bool USN2AbilityTask_UpdateBaseEdit::IsDeconstruct() const {
    return false;
}

void USN2AbilityTask_UpdateBaseEdit::HideGhost() {
}

float USN2AbilityTask_UpdateBaseEdit::GetUserRotationIncrement() const {
    return 0.0f;
}

TSoftObjectPtr<UTexture2D> USN2AbilityTask_UpdateBaseEdit::GetUsedModeTexture() const {
    return NULL;
}

TScriptInterface<IUWEBaseEditAction> USN2AbilityTask_UpdateBaseEdit::GetUsedEditAction() const {
    return NULL;
}

FTransform USN2AbilityTask_UpdateBaseEdit::GetSpawnTransform() const {
    return FTransform{};
}

FGameplayTag USN2AbilityTask_UpdateBaseEdit::GetOnEnterCueForEditMode() const {
    return FGameplayTag{};
}

TArray<FUWESculpturalBaseCellCost> USN2AbilityTask_UpdateBaseEdit::GetCost() const {
    return TArray<FUWESculpturalBaseCellCost>();
}

float USN2AbilityTask_UpdateBaseEdit::GetBuildTime() const {
    return 0.0f;
}

void USN2AbilityTask_UpdateBaseEdit::GetBlockingTestData(TArray<FSN2BuilderBlockingShape>& BlockingShapes, FSN2CollisionTestParams& Params, TArray<AActor*>& ActorsToIgnore) const {
}

TSoftClassPtr<AActor> USN2AbilityTask_UpdateBaseEdit::GetActorToSpawn() const {
    return NULL;
}

FAbilityInfoData USN2AbilityTask_UpdateBaseEdit::GetAbilityInfo() const {
    return FAbilityInfoData{};
}

void USN2AbilityTask_UpdateBaseEdit::CycleEditMode() {
}

bool USN2AbilityTask_UpdateBaseEdit::CurrentBrushIsValid() const {
    return false;
}

void USN2AbilityTask_UpdateBaseEdit::ChangeSelectionSize(bool Increment) {
}

bool USN2AbilityTask_UpdateBaseEdit::CanCycleEditMode() const {
    return false;
}

void USN2AbilityTask_UpdateBaseEdit::AddUserRotation(float Value) {
}


