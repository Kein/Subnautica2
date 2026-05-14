#include "UWEGameplayCueNotify_BurstLatent.h"
#include "Components/SceneComponent.h"

AUWEGameplayCueNotify_BurstLatent::AUWEGameplayCueNotify_BurstLatent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bAutoDestroyOnRemove = true;
}



