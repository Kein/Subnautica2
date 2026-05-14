#include "UWESonarPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWESonarPlayerStateComponent::UUWESonarPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWESonarPlayerStateComponent::SetSonarInfo(const FString& _SonarPlayerId, const FString& PlatformUserId, const FString& _PlatformProvider) {
}

void UUWESonarPlayerStateComponent::OnRep_SonarPlayerStateUpdated() const {
}

FString UUWESonarPlayerStateComponent::GetSonarPlayerId() {
    return TEXT("");
}

void UUWESonarPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESonarPlayerStateComponent, SonarPlayerState);
}


