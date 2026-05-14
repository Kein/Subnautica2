#include "MercunaNavDataChunk.h"
#include "Components/SceneComponent.h"

AMercunaNavDataChunk::AMercunaNavDataChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->NavGraphPtr = NULL;
    this->CRC = 0;
}


