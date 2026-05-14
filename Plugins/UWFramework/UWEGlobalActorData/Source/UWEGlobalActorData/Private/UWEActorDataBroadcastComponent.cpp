#include "UWEActorDataBroadcastComponent.h"
#include "Net/UnrealNetwork.h"

UUWEActorDataBroadcastComponent::UUWEActorDataBroadcastComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasValidValue = false;
    this->SaveHandle = NULL;
}

bool UUWEActorDataBroadcastComponent::HasOverriddenValue() {
    return false;
}

FGameplayTag UUWEActorDataBroadcastComponent::GetFieldIdentifier() const {
    return FGameplayTag{};
}

AUWEActorDataGroup* UUWEActorDataBroadcastComponent::GetActorDataGroup() const {
    return NULL;
}

void UUWEActorDataBroadcastComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEActorDataBroadcastComponent, HasValidValue);
}


