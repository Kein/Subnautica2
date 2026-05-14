#include "UWEAttachmentOwnerOverlapSphereComponent.h"

UUWEAttachmentOwnerOverlapSphereComponent::UUWEAttachmentOwnerOverlapSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->EnableClientLocalPrediction = false;
}

void UUWEAttachmentOwnerOverlapSphereComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


