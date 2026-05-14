#include "UWENewsfeedListViewModel.h"

UUWENewsfeedListViewModel::UUWENewsfeedListViewModel() {
    this->NewsfeedSubsystem = NULL;
}

void UUWENewsfeedListViewModel::UpdateLatestRead() {
}

void UUWENewsfeedListViewModel::OnNewsfeedListStatusUpdated(FNewsfeedListStatus Status) {
}

void UUWENewsfeedListViewModel::OnNewsfeedListRequested(bool bSuccess, TArray<FSonarNewsfeedEntryResponse> Response) {
}

bool UUWENewsfeedListViewModel::Initialize(UObject* WorldContext) {
    return false;
}

void UUWENewsfeedListViewModel::GetNewsfeedList() {
}


