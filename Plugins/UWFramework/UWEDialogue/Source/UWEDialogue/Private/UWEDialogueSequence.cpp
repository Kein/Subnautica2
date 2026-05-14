#include "UWEDialogueSequence.h"

UUWEDialogueSequence::UUWEDialogueSequence() {
    this->OnFinishedEvent = NULL;
    this->Priority = EUWEDialoguePriorityType::Stompable;
    this->Queueable = true;
}


