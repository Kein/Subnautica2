#include "SN2CollisionDamageComponent.h"

USN2CollisionDamageComponent::USN2CollisionDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinCollisionSpeed = 400.00f;
    this->MaxCollisionSpeed = 1200.00f;
    this->MinTimeBetweenDamage = 2.00f;
    this->MinCollisionDamage = 0.00f;
    this->MaxCollisionDamage = 2.00f;
}

void USN2CollisionDamageComponent::OnCollisionImpact(UPrimitiveComponent* OtherComponent, const FUWECollisionImpactObjectData& Payload, const FHitResult& Hit) {
}


