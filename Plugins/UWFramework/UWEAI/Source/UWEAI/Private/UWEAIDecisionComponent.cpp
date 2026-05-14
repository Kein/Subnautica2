#include "UWEAIDecisionComponent.h"

UUWEAIDecisionComponent::UUWEAIDecisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIOwner = NULL;
    this->ArchetypeData = NULL;
    this->HealthSetComponent = NULL;
    this->SurvivalSetComponent = NULL;
    this->PhysicalSetComponent = NULL;
    this->BehaviorSetComponent = NULL;
    this->SelectedChildIdx = -2;
}

void UUWEAIDecisionComponent::SetParentActor(AActor* Parent) {
}

void UUWEAIDecisionComponent::SetDecisionTarget(const FUWEAIDecisionTargetInfo& InTarget) {
}

bool UUWEAIDecisionComponent::IsLeader() const {
    return false;
}

bool UUWEAIDecisionComponent::HasLeader() const {
    return false;
}

UUWEAIDecisionComponent* UUWEAIDecisionComponent::GetLeaderAIDecision() const {
    return NULL;
}

AActor* UUWEAIDecisionComponent::GetLeader() const {
    return NULL;
}

FUWEAIDecisionTargetInfo UUWEAIDecisionComponent::GetDecisionTargetInfo() const {
    return FUWEAIDecisionTargetInfo{};
}

AActor* UUWEAIDecisionComponent::GetDecisionTarget() const {
    return NULL;
}


