#include "SN2ReviveableComponent.h"
#include "Net/UnrealNetwork.h"

USN2ReviveableComponent::USN2ReviveableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReviveProgress = 1.00f;
}

void USN2ReviveableComponent::ResetReviveProgress() {
}

void USN2ReviveableComponent::OnRep_ReviveProgress(float OldProgress) {
}

void USN2ReviveableComponent::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

bool USN2ReviveableComponent::CanGetRevived() const {
    return false;
}

void USN2ReviveableComponent::AddReviveProgress(float NewAddReviveProgress) {
}

void USN2ReviveableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2ReviveableComponent, ReviveProgress);
}


