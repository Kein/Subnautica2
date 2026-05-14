#include "MercunaNavOctreeTestingActor.h"

AMercunaNavOctreeTestingActor::AMercunaNavOctreeTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OtherActor = NULL;
    this->Radius = 100.00f;
    this->HeightChangePenalty = 0.00f;
    this->MaxSpeed = 300.00f;
    this->MaxAcceleration = 100.00f;
}

void AMercunaNavOctreeTestingActor::BP_SetSearchStart(bool bIsSearchStart) {
}

void AMercunaNavOctreeTestingActor::BP_SetOtherActor(AMercunaNavTestingActor* OtherTestingActor) {
}

void AMercunaNavOctreeTestingActor::BP_SetMaxPathLength(float NewMaxPathLength) {
}


