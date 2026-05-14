#include "UWESaveGameInfoViewModel.h"
#include "Templates/SubclassOf.h"

UUWESaveGameInfoViewModel::UUWESaveGameInfoViewModel() {
    this->SaveGameValidity = EUWESaveGameValidity::Invalid_NotSet;
    this->SaveGameVersion = -1;
    this->bIsMultiplayerSave = false;
    this->Thumbnail = NULL;
    this->SaveGameSize = 0;
}

bool UUWESaveGameInfoViewModel::SetDisplayName(const FString& InDisplayName) {
    return false;
}

bool UUWESaveGameInfoViewModel::IsMultiplayerSave() const {
    return false;
}

FString UUWESaveGameInfoViewModel::GetSlotName() const {
    return TEXT("");
}

FString UUWESaveGameInfoViewModel::GetLevelName() const {
    return TEXT("");
}

FDateTime UUWESaveGameInfoViewModel::GetLastModified() const {
    return FDateTime{};
}

FString UUWESaveGameInfoViewModel::GetDisplayName() const {
    return TEXT("");
}

UUWESaveGameCustomInfoBaseViewModel* UUWESaveGameInfoViewModel::GetCustomInfoViewModel(TSubclassOf<UUWESaveGameCustomInfoBaseViewModel> ViewModelClass) {
    return NULL;
}


