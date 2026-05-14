#include "UWEGameplayTimeComponent.h"
#include "Net/UnrealNetwork.h"

UUWEGameplayTimeComponent::UUWEGameplayTimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameDurationSeconds = 0.00f;
    this->SessionDurationSeconds = 0.00f;
    this->UpdateSessionInterval = 1.00f;
    this->SaveHandle = NULL;
    this->ServerWorldTimeOffset = 0.00f;
    this->SavedElapsedGameplayTime = 0.00f;
}

UUWEGameplayTimeComponent* UUWEGameplayTimeComponent::GetUWEGameplayTimeComponent() {
    return NULL;
}

double UUWEGameplayTimeComponent::GetUWEElapsedGameplayTime() {
    return 0.0;
}

float UUWEGameplayTimeComponent::GetSessionDurationSeconds() const {
    return 0.0f;
}

float UUWEGameplayTimeComponent::GetGameDurationSeconds() const {
    return 0.0f;
}

double UUWEGameplayTimeComponent::GetElapsedGameplayTime() const {
    return 0.0;
}

void UUWEGameplayTimeComponent::AdvanceTime(double DeltaTime) {
}

void UUWEGameplayTimeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEGameplayTimeComponent, GameDurationSeconds);
    DOREPLIFETIME(UUWEGameplayTimeComponent, SessionDurationSeconds);
    DOREPLIFETIME(UUWEGameplayTimeComponent, ServerWorldTimeOffset);
}


