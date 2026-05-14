#include "UWEBioBedBase.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"

AUWEBioBedBase::AUWEBioBedBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PlayerSpawnTransform = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerSpawnTransform"));
    this->bIsFallback = false;
    this->PlayerSpawnTransform->SetupAttachment(RootComponent);
}

void AUWEBioBedBase::UnregisterWithBioBedManager() {
}

void AUWEBioBedBase::RegisterWithBioBedManager() {
}

void AUWEBioBedBase::RegisterBioBed() {
}








