#include "UWEOverlapDetectorComponent.h"

UUWEOverlapDetectorComponent::UUWEOverlapDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultEnabled = true;
    this->OverlapColliderTag = TEXT("UWEOverlapDetectorComponent_OverlapCollider");
    this->ProcessOverlapsOnTick = false;
}

void UUWEOverlapDetectorComponent::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UUWEOverlapDetectorComponent::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UUWEOverlapDetectorComponent::Enable(bool NewEnable) {
}


