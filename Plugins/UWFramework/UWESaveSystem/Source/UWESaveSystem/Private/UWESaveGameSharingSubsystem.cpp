#include "UWESaveGameSharingSubsystem.h"

UUWESaveGameSharingSubsystem::UUWESaveGameSharingSubsystem() {
}

FString UUWESaveGameSharingSubsystem::UploadSaveGameToCloud(FSonarSaveGameResponse UploadResponse) {
    return TEXT("");
}

void UUWESaveGameSharingSubsystem::StartSaveGameUpload(const FString& SlotName) {
}

void UUWESaveGameSharingSubsystem::StartSaveGameDownload(const FString& SaveId) {
}

void UUWESaveGameSharingSubsystem::OnUploadSaveGameCommand(const TArray<FString>& Args) {
}

void UUWESaveGameSharingSubsystem::OnDownloadSaveGameCommand(const TArray<FString>& Args) {
}

void UUWESaveGameSharingSubsystem::OnCancelSaveGameTransferCommand(const TArray<FString>& Args) {
}

bool UUWESaveGameSharingSubsystem::IsOperationPending() {
    return false;
}

void UUWESaveGameSharingSubsystem::InternalDownloadAndImportCompleted(bool bDownloadSucceeded, const FSonarSaveGameResponse& DownloadResponse, EUWEImportSaveGameResult ImportResult, const FString& SlotName, const FGuid& SaveId) {
}

FString UUWESaveGameSharingSubsystem::DownloadSaveGameFromCloud(FSonarSaveGameResponse DownloadResponse) {
    return TEXT("");
}

void UUWESaveGameSharingSubsystem::CancelOperation() {
}


