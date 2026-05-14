#include "SN2SubmarinePowerStation.h"
#include "Components/StaticMeshComponent.h"
#include "UWEInventoryComponent.h"
#include "UWEInventoryInteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SN2EMTTorsionPointComponent.h"

ASN2SubmarinePowerStation::ASN2SubmarinePowerStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->bAllowInteractWhenNoPower = true;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->Inventory = CreateDefaultSubobject<UUWEInventoryComponent>(TEXT("Inventory"));
    this->InventoryInteraction = CreateDefaultSubobject<UUWEInventoryInteractionComponent>(TEXT("InventoryInteraction"));
    this->LeftEMT = CreateDefaultSubobject<USN2EMTTorsionPointComponent>(TEXT("LeftTransformer"));
    this->RightEMT = CreateDefaultSubobject<USN2EMTTorsionPointComponent>(TEXT("RightTransformer"));
    this->NumStartingPowerCells = 4;
    this->WreckStartingPower = 500.00f;
    this->FloodLevelToFlipBreaker = 0.30f;
    this->LeftAlignment = 1.00f;
    this->RightAlignment = 1.00f;
    this->bBreakerEnabled = true;
    this->InventoryInteraction->SetupAttachment(RootComponent);
    this->LeftEMT->SetupAttachment(RootComponent);
    this->RightEMT->SetupAttachment(RootComponent);
}

void ASN2SubmarinePowerStation::SetBreakerState(bool Enabled) {
}


void ASN2SubmarinePowerStation::OnRep_RightAlignment() {
}

void ASN2SubmarinePowerStation::OnRep_LeftAlignment() {
}

void ASN2SubmarinePowerStation::OnRep_BreakerEnabled() {
}


void ASN2SubmarinePowerStation::OnInventoryItem(const FUWEInventoryItem& InventoryItem) {
}

void ASN2SubmarinePowerStation::OnInventoryChanged() {
}

void ASN2SubmarinePowerStation::OnForcePowerOff(FGameplayTag GameplayTag, int32 TagCount) {
}

void ASN2SubmarinePowerStation::OnDamageTaken(float Damage) {
}

void ASN2SubmarinePowerStation::OnApplyTorsionRight(float Torsion, float DeltaTime) {
}

void ASN2SubmarinePowerStation::OnApplyTorsionLeft(float Torsion, float DeltaTime) {
}

bool ASN2SubmarinePowerStation::IsBreakerFlooded() const {
    return false;
}

float ASN2SubmarinePowerStation::GetEnergyPercentage() const {
    return 0.0f;
}

float ASN2SubmarinePowerStation::GetAlignment() const {
    return 0.0f;
}

void ASN2SubmarinePowerStation::EMTAdjustAlignmentByDelta(USN2EMTTorsionPointComponent* TorsionPoint, float Delta) {
}

void ASN2SubmarinePowerStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2SubmarinePowerStation, LeftAlignment);
    DOREPLIFETIME(ASN2SubmarinePowerStation, RightAlignment);
    DOREPLIFETIME(ASN2SubmarinePowerStation, bBreakerEnabled);
}


