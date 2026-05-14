#include "UWEBoxWorldZone.h"
#include "Components/BoxComponent.h"

AUWEBoxWorldZone::AUWEBoxWorldZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


