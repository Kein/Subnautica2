#include "SN2TadpoleChassisComponent.h"
#include "Net/UnrealNetwork.h"

USN2TadpoleChassisComponent::USN2TadpoleChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthFraction = 1.00f;
    this->SaveHandle = NULL;
}

void USN2TadpoleChassisComponent::OnRep_HealthFraction() {
}

void USN2TadpoleChassisComponent::OnHealthChanged(AActor* SourceActor, AActor* TargetActor, float OldHealth, float NewHealth) {
}

void USN2TadpoleChassisComponent::OnEnergyRefilled(AActor* Who) {
}

void USN2TadpoleChassisComponent::OnEnergyEmpty(AActor* Who) {
}

bool USN2TadpoleChassisComponent::IsPowered() const {
    return false;
}

bool USN2TadpoleChassisComponent::IsAttachedToTadpole() const {
    return false;
}

void USN2TadpoleChassisComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2TadpoleChassisComponent, HealthFraction);
}


