#include "UWEAIGroupingComponent.h"

UUWEAIGroupingComponent::UUWEAIGroupingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIOwner = NULL;
}

void UUWEAIGroupingComponent::TryRearrangeGroup() {
}

void UUWEAIGroupingComponent::TryDestroyGroup() {
}

void UUWEAIGroupingComponent::SetLeader(AActor* InLeader) {
}

bool UUWEAIGroupingComponent::IsLeader() const {
    return false;
}

AUWEAIController* UUWEAIGroupingComponent::GetLeaderAIController() const {
    return NULL;
}

AActor* UUWEAIGroupingComponent::GetLeader() const {
    return NULL;
}

TArray<FUWEAIGroupMember> UUWEAIGroupingComponent::GetGroup() {
    return TArray<FUWEAIGroupMember>();
}


