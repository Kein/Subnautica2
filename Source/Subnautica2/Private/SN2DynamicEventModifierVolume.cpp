#include "SN2DynamicEventModifierVolume.h"
#include "Components/SceneComponent.h"
#include "BoxVolumeComponent.h"

ASN2DynamicEventModifierVolume::ASN2DynamicEventModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->ForceSpawnOnEnter = true;
    this->Root = (USceneComponent*)RootComponent;
    this->Volume = CreateDefaultSubobject<UBoxVolumeComponent>(TEXT("Box Component Volume"));
    this->Volume->SetupAttachment(RootComponent);
}

bool ASN2DynamicEventModifierVolume::AllowedToSpawnEvent(FGameplayTag EventTag) {
    return false;
}


