#include "UWECollisionImpactComponent.h"

UUWECollisionImpactComponent::UUWECollisionImpactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnabled = true;
    this->BounceOffStaticObjects = false;
    this->CoefficientOfRestitution = 1.00f;
    this->SelfMassMult = 1.00f;
    this->SelfVelocityMult = 1.00f;
}

void UUWECollisionImpactComponent::OnHitCallback(UPrimitiveComponent* SelfComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}


