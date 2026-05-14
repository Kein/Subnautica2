#include "UWEGameplayPlayerController.h"

AUWEGameplayPlayerController::AUWEGameplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->XSX_LeftLargeMotorMultiplier = 1.00f;
    this->XSX_LeftSmallMotorMultiplier = 0.50f;
    this->XSX_RightLargeMotorMultiplier = 1.00f;
    this->XSX_RightSmallMotorMultiplier = 0.50f;
    this->TimeSinceLastActionTriggered = 0.00f;
}

void AUWEGameplayPlayerController::SetForceFeedbackMultiplier(float Multiplier) {
}

ACharacter* AUWEGameplayPlayerController::GetPlayerCharacter() const {
    return NULL;
}


