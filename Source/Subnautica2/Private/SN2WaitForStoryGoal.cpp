#include "SN2WaitForStoryGoal.h"

USN2WaitForStoryGoal::USN2WaitForStoryGoal() {
    this->bTriggerImmediate = false;
}

USN2WaitForStoryGoal* USN2WaitForStoryGoal::WaitForStoryGoal(UObject* WorldContextObject, UUWEStoryGoal* StoryGoal, bool bTriggerImmediateIfUnlocked) {
    return NULL;
}

void USN2WaitForStoryGoal::OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor) {
}

void USN2WaitForStoryGoal::OnLocalPlayerReady() {
}


