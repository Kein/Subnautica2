#include "UWESaveGameUploadViewModel.h"

UUWESaveGameUploadViewModel::UUWESaveGameUploadViewModel() {
    this->SaveGameSharingSubsystem = NULL;
    this->UploadProgress = 0.00f;
    this->UploadCompleted = false;
    this->UploadSucceeded = false;
    this->SaveGameCollectionInfoVM = NULL;
}

void UUWESaveGameUploadViewModel::StartUpload() {
}

void UUWESaveGameUploadViewModel::Shutdown() {
}

void UUWESaveGameUploadViewModel::OnUploadProgress(float InProgress, uint64 Sent, uint64 Total) {
}

void UUWESaveGameUploadViewModel::OnUploadCompleted(bool bSuccess, FSonarSaveGameResponse Response) {
}

bool UUWESaveGameUploadViewModel::Initialize(UObject* WorldContext, UUWESaveGameCollectionInfoViewModel* ViewModel) {
    return false;
}


