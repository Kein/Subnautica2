#include "SN2SubmarineControl.h"
#include "Components/SceneComponent.h"

ASN2SubmarineControl::ASN2SubmarineControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
}


