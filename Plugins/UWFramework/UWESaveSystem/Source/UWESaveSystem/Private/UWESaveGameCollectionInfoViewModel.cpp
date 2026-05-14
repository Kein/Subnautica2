#include "UWESaveGameCollectionInfoViewModel.h"

UUWESaveGameCollectionInfoViewModel::UUWESaveGameCollectionInfoViewModel() {
    this->SaveGameCollectionVersion = -1;
    this->SaveGameValidity = EUWESaveGameValidity::Invalid_NotSet;
    this->bIsMultiplayerSave = false;
    this->CollectionVersion = -1;
}

bool UUWESaveGameCollectionInfoViewModel::HasOnlyDefaultSave() const {
    return false;
}

UUWESaveGameInfoViewModel* UUWESaveGameCollectionInfoViewModel::GetSaveInfoByIndex(const EUWESaveGameCollectionIndex Index) {
    return NULL;
}

int32 UUWESaveGameCollectionInfoViewModel::GetNumSaves() const {
    return 0;
}

UUWESaveGameInfoViewModel* UUWESaveGameCollectionInfoViewModel::GetDefaultSaveInfo() {
    return NULL;
}

void UUWESaveGameCollectionInfoViewModel::AsyncSetCustomDisplayName(const FString& CustomName, FSaveGameSetDisplayNameFinishedDelegate OnSetNameComplete) {
}


