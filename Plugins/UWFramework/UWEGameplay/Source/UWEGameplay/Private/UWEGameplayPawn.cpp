#include "UWEGameplayPawn.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"

AUWEGameplayPawn::AUWEGameplayPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
}

UUWEAbilitySystemComponent* AUWEGameplayPawn::GetASC() const {
    return NULL;
}


