#include "SN2AbilityTask_WaitForCollision.h"

USN2AbilityTask_WaitForCollision::USN2AbilityTask_WaitForCollision() {
    this->TargetCollisionStrength = 0.00f;
}

USN2AbilityTask_WaitForCollision* USN2AbilityTask_WaitForCollision::WaitForCollision(UGameplayAbility* OwningAbility, float MinCollisionStrength) {
    return NULL;
}

void USN2AbilityTask_WaitForCollision::OnComponentHit(UPrimitiveComponent* SelfComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}


