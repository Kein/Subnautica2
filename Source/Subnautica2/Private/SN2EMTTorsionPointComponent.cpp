#include "SN2EMTTorsionPointComponent.h"
#include "Net/UnrealNetwork.h"

USN2EMTTorsionPointComponent::USN2EMTTorsionPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointVisualTurnSpeed = 180.00f;
    this->InteractingActor = NULL;
    this->VisualRotation = 0.00f;
}

void USN2EMTTorsionPointComponent::TryGetExtraInfo(bool& bHasExtraInfo, FEMTTorsionComponentExtraInfo& ExtraInfo) const {
}

void USN2EMTTorsionPointComponent::SetInteractingActor(AActor* NewActor) {
}

void USN2EMTTorsionPointComponent::OnRep_InteractingActor() {
}

void USN2EMTTorsionPointComponent::NativeTorsionApplied(float Torsion, float DeltaTime) {
}

bool USN2EMTTorsionPointComponent::HasInteractingActor() const {
    return false;
}

void USN2EMTTorsionPointComponent::ClearInteractingActor() {
}

void USN2EMTTorsionPointComponent::ApplyTorsion(float Multiplier, float DeltaTime) {
}

void USN2EMTTorsionPointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2EMTTorsionPointComponent, InteractingActor);
    DOREPLIFETIME(USN2EMTTorsionPointComponent, VisualRotation);
}


