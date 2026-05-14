#include "UWEGameplayCharacter.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"

AUWEGameplayCharacter::AUWEGameplayCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("RootComponent"))) {
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
}

UUWEAbilitySystemComponent* AUWEGameplayCharacter::GetASC() const {
    return NULL;
}


