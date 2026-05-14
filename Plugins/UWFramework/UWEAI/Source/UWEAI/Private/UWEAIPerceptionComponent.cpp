#include "UWEAIPerceptionComponent.h"

UUWEAIPerceptionComponent::UUWEAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArchetypeData = NULL;
    this->UWEAIOwner = NULL;
}

void UUWEAIPerceptionComponent::Reload() {
}

void UUWEAIPerceptionComponent::OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus) {
}

void UUWEAIPerceptionComponent::OnTargetPerceptionForgot(AActor* Actor) {
}

void UUWEAIPerceptionComponent::OnTargetEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

bool UUWEAIPerceptionComponent::IsPlayer(AActor* PerceivedActor) {
    return false;
}

bool UUWEAIPerceptionComponent::IsDetected(AActor* PerceivedActor) {
    return false;
}

bool UUWEAIPerceptionComponent::IsCurrentlyPerceived(AActor* PerceivedActor) {
    return false;
}

float UUWEAIPerceptionComponent::GetSightRadius() {
    return 0.0f;
}

float UUWEAIPerceptionComponent::GetLoseSightRadius() {
    return 0.0f;
}

FVector UUWEAIPerceptionComponent::GetLastSensedLocation(AActor* PerceivedActor) {
    return FVector{};
}


