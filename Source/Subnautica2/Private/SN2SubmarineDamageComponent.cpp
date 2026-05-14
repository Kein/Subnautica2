#include "SN2SubmarineDamageComponent.h"
#include "Net/UnrealNetwork.h"

USN2SubmarineDamageComponent::USN2SubmarineDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageActorClass = NULL;
    this->TimeLastDamageTaken = 0.00f;
}

void USN2SubmarineDamageComponent::OnRep_SubSystemDamage() {
}

void USN2SubmarineDamageComponent::OnDamageActorChanged(const ASN2SubmarineDamage* DamageActor, float Amount) {
}

float USN2SubmarineDamageComponent::GetSubsystemDamagePercent(FGameplayTag SubsystemTag) const {
    return 0.0f;
}

float USN2SubmarineDamageComponent::GetSubSystemDamage(FGameplayTag SubsystemTag) const {
    return 0.0f;
}

void USN2SubmarineDamageComponent::DealDamage(float Damage, const FHitResult& Hit, ESubmarineDamageLocation OverrideLocation) {
}

void USN2SubmarineDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2SubmarineDamageComponent, SubsystemDamage);
}


