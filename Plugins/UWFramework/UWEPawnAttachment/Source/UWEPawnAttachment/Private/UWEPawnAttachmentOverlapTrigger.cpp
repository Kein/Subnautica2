#include "UWEPawnAttachmentOverlapTrigger.h"
#include "Components/SphereComponent.h"

AUWEPawnAttachmentOverlapTrigger::AUWEPawnAttachmentOverlapTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
    this->OverlapCollisionChannel = ECC_WorldStatic;
    this->EnableClientLocalPrediction = false;
    this->Trigger = (USphereComponent*)RootComponent;
}


