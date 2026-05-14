#include "UWENewsfeedSubsystem.h"
#include "UWENewsfeedListViewModel.h"

UUWENewsfeedSubsystem::UUWENewsfeedSubsystem() {
    this->NewsfeedStatus = FNewsfeedListStatus::Uninitialized;
    this->NewsfeedListViewModel = CreateDefaultSubobject<UUWENewsfeedListViewModel>(TEXT("NewsfeedListViewModel"));
}

void UUWENewsfeedSubsystem::StartNewsfeedTimer() {
}

void UUWENewsfeedSubsystem::RetrieveImageAsync(const FString& ImageUrl, const UImage* Image) {
}

void UUWENewsfeedSubsystem::RetrieveImage(const FString& ImageUrl, const UImage* Image) {
}

void UUWENewsfeedSubsystem::OnSonarConnectionChanged(bool bIsConnected) {
}

void UUWENewsfeedSubsystem::GetSingleNewsfeedEntry(const FString& DocumentId) {
}

void UUWENewsfeedSubsystem::GetNewsfeedEntryList() {
}

void UUWENewsfeedSubsystem::DownloadImage(const FString& ImageUrl) {
}


