#include "UWESaveGameCollectionInfoListViewModel.h"

UUWESaveGameCollectionInfoListViewModel::UUWESaveGameCollectionInfoListViewModel() {
    this->WorldContext = NULL;
    this->bHasAnySinglePlayerSaves = false;
    this->bHasMultiPlayerSaves = false;
    this->bHasAvailableSlots = false;
}

void UUWESaveGameCollectionInfoListViewModel::RefreshAsync(const FString& LevelName, FSaveInfoRefreshDelegate OnRefreshCompleted) {
}

int32 UUWESaveGameCollectionInfoListViewModel::GetSlotPostFix(bool bIsMultiplayer) const {
    return 0;
}

int32 UUWESaveGameCollectionInfoListViewModel::GetNumSinglePlayerEntries() const {
    return 0;
}

int32 UUWESaveGameCollectionInfoListViewModel::GetNumSaveEntries(bool bIsMultiplayer) const {
    return 0;
}

int32 UUWESaveGameCollectionInfoListViewModel::GetNumMultiPlayerEntries() const {
    return 0;
}

int32 UUWESaveGameCollectionInfoListViewModel::GetNumAllSaveEntries() const {
    return 0;
}

void UUWESaveGameCollectionInfoListViewModel::GetLatestSaveSlot(const FString& LevelName, FString& SlotName, EUWESaveGameValidity& IsValid, bool bIsMultiplayer) const {
}

void UUWESaveGameCollectionInfoListViewModel::DeleteGame(const FString& SlotName, FGuid SaveId) {
}


