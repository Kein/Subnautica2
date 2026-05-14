#include "SN2Submersible.h"
#include "UWESubmersibleMovementComponent.h"

ASN2Submersible::ASN2Submersible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UUWESubmersibleMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationPitch = true;
    this->bUseControllerRotationRoll = true;
    this->AngularAcceleration = 110.00f;
    this->AngularDrag = 2.00f;
    this->RollCorrectionRate = 80.00f;
}

void ASN2Submersible::ResetControllerRotation() {
}


