#include "UWEPowerLinkOverlapComponent.h"
#include "Components/BoxComponent.h"

UUWEPowerLinkOverlapComponent::UUWEPowerLinkOverlapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
}

void UUWEPowerLinkOverlapComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UUWEPowerLinkOverlapComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool UUWEPowerLinkOverlapComponent::IsOverlapped() const {
    return false;
}

void UUWEPowerLinkOverlapComponent::Initialize(UUWEPowerNodeComponent* node, FVector Start, FVector End, float Width) {
}


