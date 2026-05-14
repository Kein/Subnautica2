#include "UWEGameplayActor.h"
#include "Components/SceneComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEAbilitySystemData.h"

AUWEGameplayActor::AUWEGameplayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AbilitySystemData = CreateDefaultSubobject<UUWEAbilitySystemData>(TEXT("AbilitySystemData"));
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
}

UUWEAbilitySystemComponent* AUWEGameplayActor::GetASC() const {
    return NULL;
}


