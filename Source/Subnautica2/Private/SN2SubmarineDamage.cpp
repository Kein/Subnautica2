#include "SN2SubmarineDamage.h"
#include "Components/StaticMeshComponent.h"
#include "UWEAbilitySystemComponent.h"
#include "UWEHealthSetComponent.h"
#include "Net/UnrealNetwork.h"

ASN2SubmarineDamage::ASN2SubmarineDamage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->HealthSetComponent = CreateDefaultSubobject<UUWEHealthSetComponent>(TEXT("HealthSetComponent"));
    this->SN2DamagePointFloodThreshold = 30.00f;
    this->SN2WaterThroughPutPerDamage = 100.00f;
    this->SN2SubmarineMaximumHealthDamage = 400.00f;
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->DamageLocation = ESubmarineDamageLocation::Exterior;
}

void ASN2SubmarineDamage::OnRep_DamageLocation() {
}


bool ASN2SubmarineDamage::IsBreached() const {
    return false;
}

float ASN2SubmarineDamage::GetWaterThroughPut() const {
    return 0.0f;
}

ESubmarineDamageLocation ASN2SubmarineDamage::GetDamageLocation() const {
    return ESubmarineDamageLocation::None;
}

float ASN2SubmarineDamage::GetDamageAmount() const {
    return 0.0f;
}

void ASN2SubmarineDamage::AddDamage(float Damage) {
}

void ASN2SubmarineDamage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASN2SubmarineDamage, ConnectedDamageActor);
    DOREPLIFETIME(ASN2SubmarineDamage, DamageLocation);
}


