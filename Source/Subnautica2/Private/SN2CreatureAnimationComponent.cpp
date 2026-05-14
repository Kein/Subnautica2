#include "SN2CreatureAnimationComponent.h"

USN2CreatureAnimationComponent::USN2CreatureAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedSkeletalMesh = NULL;
    this->CachedSkeletalMeshManaged = NULL;
    this->CachedRepComp = NULL;
    this->CachedAIMovementComponent = NULL;
    this->Actor = NULL;
    this->bIsSubmerged = false;
    this->SteeringAccelerationVectorSpace = EUWEAIMovementVectorSpace::Local;
    this->SteeringAccelerationRelativeMode = EUWEAIMovementVectorRelativeMode::None;
    this->VolumeType = EVolumeType::EVolumeType_None;
    this->AccelerationSpeed = 0.00f;
    this->Speed = 0.00f;
    this->bNormalizeAccelerationVector = false;
    this->RelativeAngularSpeed = 0.00f;
    this->AccelerationConversionCurve = NULL;
    this->AccelerationSpeedDelta = 0.00f;
    this->bMapNormalizationToCurve = false;
    this->SpeedDelta = 0.00f;
    this->AccelerationSpeedPrev = 0.00f;
    this->bTargetIsTadpole = false;
    this->bTentacleInnerRightAttached = false;
    this->bCreatureHasTentacles = false;
    this->TentacleTargetActor = NULL;
    this->DeltaSeconds = 0.00f;
    this->bPrintValues = false;
    this->bDriveActorFromMeshComponent = false;
    this->DampenInterpSpeed = 0.00f;
    this->SpeedNormalToCurrentMax = 0.00f;
    this->SpeedNormalToCurrentMaxDelta = 0.00f;
    this->AccelSpeedNormalToCurrentMax = 0.00f;
    this->AccelSpeedNormalToCurrentMaxDelta = 0.00f;
    this->PlayerDistanceInnerRightAttach = 0.00f;
}

void USN2CreatureAnimationComponent::OnVolumeTypeChanged(EVolumeType NewVolumeType) {
}


