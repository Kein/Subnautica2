#include "UWESaveSlotMetaData.h"

FUWESaveSlotMetaData::FUWESaveSlotMetaData() {
    this->Version = 0;
    this->BuildNumber = 0;
    this->SaveGameSize = 0;
    this->IsMultiplayerSave = false;
    this->bWasMultiplayerSave = false;
    this->bWasImported = false;
    this->Validity = EUWESaveGameValidity::Invalid_NotSet;
}

