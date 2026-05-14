#include "SN2Submarine.h"
#include "UWEHealthSetComponent.h"

ASN2Submarine::ASN2Submarine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthComponent"));
}


