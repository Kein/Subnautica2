#include "UWELadderComponent.h"

UUWELadderComponent::UUWELadderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->CanCharacterStepUpOn = ECB_No;
    this->ClimbUpText = TEXT("ClimbUp");
    this->ClimbDownText = TEXT("ClimbDown");
    this->bAllowClimbDown = true;
    this->bStepOver = true;
    this->ClimbSpeed = 500.00f;
}

bool UUWELadderComponent::IsActorInFront(const AActor* Actor) const {
    return false;
}

bool UUWELadderComponent::HasClimbingActors() const {
    return false;
}

bool UUWELadderComponent::CanClimpUp(const AActor* Actor) const {
    return false;
}

bool UUWELadderComponent::CanClimbFromLocation(const AActor* Actor) const {
    return false;
}


