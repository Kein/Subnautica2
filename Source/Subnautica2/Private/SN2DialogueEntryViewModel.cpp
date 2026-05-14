#include "SN2DialogueEntryViewModel.h"

USN2DialogueEntryViewModel::USN2DialogueEntryViewModel() {
    this->DialogueSequence = NULL;
    this->IsPlaying = false;
}

void USN2DialogueEntryViewModel::SetIsPlaying(bool InIsPlaying) {
}

FString USN2DialogueEntryViewModel::GetDebugText() const {
    return TEXT("");
}


