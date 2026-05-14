#include "UWENewsfeedEntryViewModel.h"

UUWENewsfeedEntryViewModel::UUWENewsfeedEntryViewModel() {
    this->NewsfeedSubsystem = NULL;
    this->ThumbnailTexture = NULL;
    this->DownloadCompleted = false;
    this->ShowNewNotification = false;
}

void UUWENewsfeedEntryViewModel::OnNewsfeedEntryRequested(bool bSuccess, FSonarNewsfeedEntryResponse Response) {
}

bool UUWENewsfeedEntryViewModel::Initialize(UObject* WorldContext) {
    return false;
}

bool UUWENewsfeedEntryViewModel::HasNewEntry() {
    return false;
}

void UUWENewsfeedEntryViewModel::GetNewsfeedEntry(const FString& DocumentId) {
}

void UUWENewsfeedEntryViewModel::GetLatestNewsfeedEntry() {
}


