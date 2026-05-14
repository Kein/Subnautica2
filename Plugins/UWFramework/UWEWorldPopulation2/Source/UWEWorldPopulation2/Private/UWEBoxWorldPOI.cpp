#include "UWEBoxWorldPOI.h"
#include "Components/BoxComponent.h"

AUWEBoxWorldPOI::AUWEBoxWorldPOI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
}


