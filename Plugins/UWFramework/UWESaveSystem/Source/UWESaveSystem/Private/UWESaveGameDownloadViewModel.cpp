#include "UWESaveGameDownloadViewModel.h"

UUWESaveGameDownloadViewModel::UUWESaveGameDownloadViewModel() {
    this->SaveGameSharingSubsystem = NULL;
    this->DownloadProgress = 0.00f;
    this->DownloadCompleted = false;
}

void UUWESaveGameDownloadViewModel::StartDownload(const FString& SaveId) {
}

void UUWESaveGameDownloadViewModel::Shutdown() {
}

void UUWESaveGameDownloadViewModel::OnDownloadProgress(float InProgress, uint64 Sent, uint64 Total) {
}

void UUWESaveGameDownloadViewModel::OnDownloadCompleted(FUWESaveGameDownloadStatus Status, const FString& InSlotName, const FSonarSaveUploadMetadata& InSaveMetaData) {
}

bool UUWESaveGameDownloadViewModel::Initialize(UObject* WorldContext) {
    return false;
}


