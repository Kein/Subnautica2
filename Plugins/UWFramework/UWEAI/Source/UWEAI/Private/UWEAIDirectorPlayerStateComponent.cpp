#include "UWEAIDirectorPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWEAIDirectorPlayerStateComponent::UUWEAIDirectorPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsPlayerDetected = false;
    this->HighestAwareness = 0.00f;
}

void UUWEAIDirectorPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAIDirectorPlayerStateComponent, IsPlayerDetected);
    DOREPLIFETIME(UUWEAIDirectorPlayerStateComponent, HighestAwareness);
    DOREPLIFETIME(UUWEAIDirectorPlayerStateComponent, HighestAwarenessActor);
}


