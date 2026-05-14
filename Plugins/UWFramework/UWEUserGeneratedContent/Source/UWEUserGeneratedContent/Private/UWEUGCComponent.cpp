#include "UWEUGCComponent.h"
#include "Net/UnrealNetwork.h"

UUWEUGCComponent::UUWEUGCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void UUWEUGCComponent::ServerSetPlayerText(FGameplayTag TextKey, const FString& PlayerText) {
}

void UUWEUGCComponent::OnRep_PlayerTexts() {
}

void UUWEUGCComponent::OnProfanityFilterChanged(bool bProfanityFilterEnabled) {
}

bool UUWEUGCComponent::HasUserGeneratedContent() const {
    return false;
}

FText UUWEUGCComponent::GetPlayerText(FGameplayTag TextKey, FText DefaultText) {
    return FText::GetEmpty();
}

void UUWEUGCComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEUGCComponent, PlayerTexts);
}


