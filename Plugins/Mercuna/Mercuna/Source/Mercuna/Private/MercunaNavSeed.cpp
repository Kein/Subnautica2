#include "MercunaNavSeed.h"
#include "Components/SceneComponent.h"

AMercunaNavSeed::AMercunaNavSeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("NavSeedComp"));
    this->bApplyToAllNavGraphs = true;
}


