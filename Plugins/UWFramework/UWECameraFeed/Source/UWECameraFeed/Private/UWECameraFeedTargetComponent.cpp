#include "UWECameraFeedTargetComponent.h"
#include "Net/UnrealNetwork.h"

UUWECameraFeedTargetComponent::UUWECameraFeedTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenderWidth = 256;
    this->RenderHeight = 256;
    this->ScreenEnabled = true;
    this->RenderTextureTarget = NULL;
    this->PriorSource = NULL;
    this->CurrentSource = NULL;
}

void UUWECameraFeedTargetComponent::SetSource(UUWECameraFeedSourceComponent* Source) {
}

void UUWECameraFeedTargetComponent::OnRep_CurrentSource() {
}

void UUWECameraFeedTargetComponent::ClearSource() {
}

void UUWECameraFeedTargetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWECameraFeedTargetComponent, CurrentSource);
}


