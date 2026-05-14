#include "MercunaObstacleComponent.h"

UMercunaObstacleComponent::UMercunaObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bAutomatic = true;
    this->Type = EMercunaObstacleType::Sphere;
    this->SphereRadius = 0.00f;
    this->CylinderRadius = 0.00f;
    this->CylinderHeight = 0.00f;
    this->MovementType = EMercunaObstacleMovementType::None;
    this->DefaultReaction = EMercunaObstacleReaction::Avoid;
    this->bCutOutWhenStationary = true;
    this->StationaryThresholdTime = 5.00f;
}

void UMercunaObstacleComponent::UpdateMovementType(const EMercunaObstacleMovementType& NewMovementType) {
}

void UMercunaObstacleComponent::OnCharacterMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


