#include "UWECompartmentConnector.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AUWECompartmentConnector::AUWECompartmentConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Connection"));
    this->Connection = (UBoxComponent*)RootComponent;
    this->WaterThroughPut = 0.00f;
    this->bIsOpen = true;
}

void AUWECompartmentConnector::SetIsOpen(bool bInIsOpen) {
}

void AUWECompartmentConnector::OnRep_IsOpen() {
}

void AUWECompartmentConnector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AUWECompartmentConnector, bIsOpen);
}


