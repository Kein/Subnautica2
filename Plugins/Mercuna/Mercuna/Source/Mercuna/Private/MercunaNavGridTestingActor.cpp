#include "MercunaNavGridTestingActor.h"

AMercunaNavGridTestingActor::AMercunaNavGridTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OtherActor = NULL;
    this->MinTurnRadius = 300.00f;
    this->IdealTurnRadius = 2000.00f;
    this->MaxSpeed = 300.00f;
    this->InitialSpeed = 0.00f;
    this->SlopePenalty = 0.50f;
    this->bUseEndDirection = false;
}


