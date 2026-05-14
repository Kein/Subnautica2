#include "UWELoopingCuesComponent.h"
#include "Net/UnrealNetwork.h"

UUWELoopingCuesComponent::UUWELoopingCuesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWELoopingCuesComponent::RemoveCue(FGameplayTag Tag) {
}

void UUWELoopingCuesComponent::RemoveAnyCue(FGameplayTag Tag) {
}

void UUWELoopingCuesComponent::AddCueNoParams(FGameplayTag Tag) {
}

void UUWELoopingCuesComponent::AddCue(FGameplayTag Tag, const FGameplayCueParameters& Parameters) {
}

void UUWELoopingCuesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWELoopingCuesComponent, CueData);
}


