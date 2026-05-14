#include "UWEPlaceableProxy.h"
#include "Components/SceneComponent.h"
#include "UWESaveComponent.h"

AUWEPlaceableProxy::AUWEPlaceableProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bDisableProxyOnBeginPlay = false;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->bShouldSpawnActorOnBeginPlay = true;
}

void AUWEPlaceableProxy::OnProxiedActorPickedUp(AActor* Actor) {
}

void AUWEPlaceableProxy::OnProxiedActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

FUWEActorUID AUWEPlaceableProxy::GetUWEActorUID() const {
    return FUWEActorUID{};
}

FUWEPlaceableProxySpawnedActor AUWEPlaceableProxy::GetSpawnedActor() const {
    return FUWEPlaceableProxySpawnedActor{};
}


