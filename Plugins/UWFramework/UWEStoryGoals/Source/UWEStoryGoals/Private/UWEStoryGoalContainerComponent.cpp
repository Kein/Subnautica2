#include "UWEStoryGoalContainerComponent.h"
#include "Net/UnrealNetwork.h"

UUWEStoryGoalContainerComponent::UUWEStoryGoalContainerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxUnlockRecordsKept = 100;
    this->SaveHandle = NULL;
}

void UUWEStoryGoalContainerComponent::TestOnlyClearAllUnlocked() {
}

bool UUWEStoryGoalContainerComponent::HasStoryGoal(UUWEStoryGoal* StoryGoal) const {
    return false;
}

int32 UUWEStoryGoalContainerComponent::GetNumStoryGoals() const {
    return 0;
}

void UUWEStoryGoalContainerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEStoryGoalContainerComponent, UnlockRecords);
    DOREPLIFETIME(UUWEStoryGoalContainerComponent, StoryGoals);
}


