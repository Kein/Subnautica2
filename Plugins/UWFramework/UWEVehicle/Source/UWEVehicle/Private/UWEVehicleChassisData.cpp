#include "UWEVehicleChassisData.h"

UUWEVehicleChassisData::UUWEVehicleChassisData() {
    this->bAdjustCapsuleSize = false;
    this->CapsuleRadius = 120.00f;
    this->CapsuleHalfHeight = 120.00f;
    this->bUseSoftCollision = true;
    this->InputMappingContext = NULL;
    this->MovementType = EUWEVehicleMovementType::Submersible;
    this->MaxSwimAcceleration = 2048.00f;
    this->MaxWalkAcceleration = 768.00f;
    this->BankingModifier = 0.40f;
    this->AngularAcceleration = 110.00f;
    this->AngularDrag = 2.00f;
    this->SwimmingFriction = 0.50f;
    this->RollCorrectionRate = 80.00f;
    this->StrafeSpeedModifier = 0.80f;
    this->bDisableAttachHandles = false;
}

UUWEVehicleChassisData* UUWEVehicleChassisData::GetVehicleChassisDataForActor(const AActor* Actor) {
    return NULL;
}


