#include "UWESaveInProgressViewModel.h"

UUWESaveInProgressViewModel::UUWESaveInProgressViewModel() {
    this->bDisplaySaveBlockedWarning = false;
    this->bAutoSaveInProgress = false;
    this->bManualSaveInProgress = false;
    this->bSaveNotificationInProgress = false;
    this->bSaveResult = false;
    this->bSavingBlocked = false;
}

bool UUWESaveInProgressViewModel::ShouldPromptToSave(const UObject* WorldContextObject) {
    return false;
}

void UUWESaveInProgressViewModel::OnSavingUnblocked() {
}

void UUWESaveInProgressViewModel::OnSavingBlocked() {
}

void UUWESaveInProgressViewModel::OnManualSaveStarted() {
}

void UUWESaveInProgressViewModel::OnManualSaveFinished(bool bInSaveResult) {
}

void UUWESaveInProgressViewModel::OnAutoSaveStarted() {
}

void UUWESaveInProgressViewModel::OnAutoSaveFinished(bool bInSaveResult) {
}

bool UUWESaveInProgressViewModel::IsAnySaveInProgress() const {
    return false;
}


