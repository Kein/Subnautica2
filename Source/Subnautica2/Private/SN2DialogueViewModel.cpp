#include "SN2DialogueViewModel.h"

USN2DialogueViewModel::USN2DialogueViewModel() {
    this->StoryGoalContainer = NULL;
}

void USN2DialogueViewModel::UnlockAllDialogueLogs(AActor* ReceivingActor) {
}

USN2DialogueViewModel* USN2DialogueViewModel::TryGetDialogueViewModel(UObject* WorldContext) {
    return NULL;
}

void USN2DialogueViewModel::Refresh() {
}

void USN2DialogueViewModel::OnStoryGoalUnlocked(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void USN2DialogueViewModel::Initialize(UObject* WorldContext) {
}

void USN2DialogueViewModel::ClearPendingEntries() {
}


