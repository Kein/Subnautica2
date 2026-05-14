#include "UWEOverlapExpellerComponent.h"

UUWEOverlapExpellerComponent::UUWEOverlapExpellerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapColliderTag = TEXT("UWEOverlapExpellerComponent_OverlapCollider");
    this->ProcessOverlapsOnTick = true;
    this->InfluenceType = EUWEMovementComponentInfluenceType::Force;
    this->Magnitude = 1000000.00f;
    this->MoveAffectedObjectWithActorVelocity = false;
    this->ActorVelocityMultiplier = 0.75f;
}


