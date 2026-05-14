#include "UWEAIReplicationComponent.h"
#include "Net/UnrealNetwork.h"

UUWEAIReplicationComponent::UUWEAIReplicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActor = NULL;
}

AActor* UUWEAIReplicationComponent::GetTargetActor() {
    return NULL;
}

void UUWEAIReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEAIReplicationComponent, TargetActor);
}


