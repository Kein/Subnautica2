#include "UWEComputerTextInterfaceDialogueData.h"

UUWEComputerTextInterfaceDialogueData::UUWEComputerTextInterfaceDialogueData() {
    this->IsGoldenPath = false;
    this->OrderingIndex = 0;
    this->UnlocksWorldStoryGoal = NULL;
    this->UnlocksPlayerStoryGoal = NULL;
    this->ResponseEmotion = EUWEComputerTextInterfaceResponseEmotion::Neutral;
    this->AfterDialogueAction = EUWEComputerTextInterfaceAfterDialogueAction::None;
    this->GoBackNumberOfDialoguesCount = 1;
    this->AfterDialogueActionDelay = 0.00f;
    this->GoBackAfterClick = false;
    this->GoBackAfterClickDelay = 0.00f;
    this->DialogueDataToOpenDelay = 0.00f;
    this->RequiredLogic = NULL;
    this->BlockingLogic = NULL;
}

bool UUWEComputerTextInterfaceDialogueData::ContainsGoldenPathInternal(TSet<UUWEComputerTextInterfaceDialogueData*>& VisitedDialogues) {
    return false;
}

bool UUWEComputerTextInterfaceDialogueData::ContainsGoldenPath() {
    return false;
}


