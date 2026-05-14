#include "UWESkeletalMeshComponentManaged.h"

UUWESkeletalMeshComponentManaged::UUWESkeletalMeshComponentManaged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME: ENGINE CHANGE:
    //this->bShouldUseActorRenderedFlag = true;
    this->RelevancyPriorityBias = 0;
    this->ScalabilityGroup = ESkeletalMeshScalabilityGroup::Misc;
    this->SkeletalMeshMaxDrawSignificanceTreshold = 0.99f;
    this->bDoingReducedWork = false;
    this->ReducedWork_ComponentTicksPerSecond = 15;
    this->ReducedWork_UpdateRate = 2;
    this->ReducedWork_EvaluationRate = 2;
    this->ReducedWork_BaseNonRenderedUpdateRate = 8;
    this->ReducedWork_SimulatePhysics = false;
}

bool UUWESkeletalMeshComponentManaged::IsShowingSkeletal() const {
    return false;
}


