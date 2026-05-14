#include "UWEAttachmentOwnerInteractableBoxComponent.h"

UUWEAttachmentOwnerInteractableBoxComponent::UUWEAttachmentOwnerInteractableBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->InfoPrimaryText = TEXT("Attach");
    this->InteractionDistance = 300.00f;
    this->EnableClientLocalPrediction = false;
}


