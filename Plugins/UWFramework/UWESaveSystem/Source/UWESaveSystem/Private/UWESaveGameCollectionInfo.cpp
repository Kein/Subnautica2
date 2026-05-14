#include "UWESaveGameCollectionInfo.h"

FUWESaveGameCollectionInfo::FUWESaveGameCollectionInfo() {
    this->Version = 0;
    this->bIsMultiplayerSave = false;
    this->bWasMultiplayerSave = false;
    this->bWasImported = false;
    this->NetMode = EUWESaveGameNetMode::Standalone;
    this->SavesCount = 0;
    this->BuildNumber = 0;
    this->Validity = EUWESaveGameValidity::Invalid_NotSet;
}

