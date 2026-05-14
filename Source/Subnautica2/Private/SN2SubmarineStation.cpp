#include "SN2SubmarineStation.h"
#include "UWEAbilitySystemComponent.h"

ASN2SubmarineStation::ASN2SubmarineStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->UWEAbilitySystemComponent = CreateDefaultSubobject<UUWEAbilitySystemComponent>(TEXT("UWEAbilitySystemComponent"));
    this->SubmarineCompartment = NULL;
    this->bAllowInteractWhenNoPower = false;
}

void ASN2SubmarineStation::RemoveAlert(FAlertInstHandle& AlertInstHandle) {
}

FAlertInstHandle ASN2SubmarineStation::PlayAlert(USN2SubmarineAlert* Alert, bool IgnorePreexistingCooldown) {
    return FAlertInstHandle{};
}


void ASN2SubmarineStation::OnSubsystemBrokenTagsChanged(FGameplayTag GameplayTag, int32 Stack) {
}





void ASN2SubmarineStation::OnPollutedStackChanged(FGameplayTag GameplayTag, int32 Stack) {
}


void ASN2SubmarineStation::OnFireStackChanged(FGameplayTag GameplayTag, int32 Stack) {
}

void ASN2SubmarineStation::OnEnergyRefilled(AActor* _) {
}

void ASN2SubmarineStation::OnEnergyEmpty(AActor* _) {
}


void ASN2SubmarineStation::OnElectrocutedStackChanged(FGameplayTag GameplayTag, int32 Stack) {
}


void ASN2SubmarineStation::NativeOnCompartmentFloodLevelChanged(float FloodLevel) {
}

bool ASN2SubmarineStation::IsSubsystemActive() const {
    return false;
}

bool ASN2SubmarineStation::IsStationInteractable() const {
    return false;
}

bool ASN2SubmarineStation::IsOnFire() const {
    return false;
}

bool ASN2SubmarineStation::IsElectrocuted() const {
    return false;
}

bool ASN2SubmarineStation::HasPower() const {
    return false;
}

ASN2Submarine* ASN2SubmarineStation::GetSubmarine() const {
    return NULL;
}

UUWEMechanicalSetComponent* ASN2SubmarineStation::GetMechanicalSetComponent() const {
    return NULL;
}


