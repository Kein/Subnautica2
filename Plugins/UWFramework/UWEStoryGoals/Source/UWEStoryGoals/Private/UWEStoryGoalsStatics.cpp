#include "UWEStoryGoalsStatics.h"

UUWEStoryGoalsStatics::UUWEStoryGoalsStatics() {
}

void UUWEStoryGoalsStatics::UnlockWorldStoryGoal(UObject* WorldContext, UUWEStoryGoal* StoryGoal) {
}

void UUWEStoryGoalsStatics::UnlockPlayerStoryGoalForPawn(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APawn* Pawn) {
}

void UUWEStoryGoalsStatics::UnlockPlayerStoryGoal(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APlayerState* PlayerState) {
}

bool UUWEStoryGoalsStatics::IsStoryGoalUnlocked(UObject* WorldContext, UUWEStoryGoal* StoryGoal, APlayerState* ForPlayerState) {
    return false;
}


