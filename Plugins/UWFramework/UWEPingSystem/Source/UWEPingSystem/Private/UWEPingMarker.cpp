#include "UWEPingMarker.h"
#include "Components/SceneComponent.h"
#include "UWESaveComponent.h"
#include "Net/UnrealNetwork.h"

AUWEPingMarker::AUWEPingMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->AllowDuplicates = false;
    this->SaveComponent = CreateDefaultSubobject<UUWESaveComponent>(TEXT("SaveComponent"));
    this->RootComp = (USceneComponent*)RootComponent;
}

FGuid AUWEPingMarker::GetUniqueId() {
    return FGuid{};
}

void AUWEPingMarker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWEPingMarker, FriendlyName);
    DOREPLIFETIME(AUWEPingMarker, OriginalName);
    DOREPLIFETIME(AUWEPingMarker, PingData);
    DOREPLIFETIME(AUWEPingMarker, UniqueID);
}


