#include "MercunaNavTestingActor.h"
#include "Components/SphereComponent.h"

AMercunaNavTestingActor::AMercunaNavTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->bSearchStart = false;
    this->MaxPathLength = 0.00f;
    this->bAllowPartialPath = true;
    this->bContinuouslyRepath = false;
    this->bRaycast = false;
    this->bAutomaticRepath = true;
    this->bPathExist = false;
    this->bPathIsPartial = false;
    this->bPathIsOutOfNodes = false;
    this->PathLength = 0.00f;
    this->PathSections = 0;
    this->PathFindTime = 0.00f;
    this->PathNodesUsed = 0;
    this->PathFindRepeats = 1;
    this->bDisplayAverageTime = false;
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->Path = NULL;
    this->NavGraph = NULL;
}

void AMercunaNavTestingActor::Repath() {
}

void AMercunaNavTestingActor::PathfindLatent(bool& Result, UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool bAllowPartial) {
}

void AMercunaNavTestingActor::OnPathUpdate(TEnumAsByte<EMercunaPathEvent::Type> PathEvent) {
}

void AMercunaNavTestingActor::OnNavGraphBuildComplete(bool Success) {
}


