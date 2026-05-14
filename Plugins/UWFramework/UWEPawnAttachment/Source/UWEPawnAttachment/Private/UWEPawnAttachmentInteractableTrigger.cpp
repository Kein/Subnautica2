#include "UWEPawnAttachmentInteractableTrigger.h"
#include "Components/BoxComponent.h"

AUWEPawnAttachmentInteractableTrigger::AUWEPawnAttachmentInteractableTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractCollision"));
    this->InteractCollision = (UBoxComponent*)RootComponent;
    this->InfoPrimaryText = TEXT("Attach");
    this->InteractionDistance = 300.00f;
    this->EnableClientLocalPrediction = false;
}


