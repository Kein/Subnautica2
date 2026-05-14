#include "SN2ConstructableComponent.h"
#include "Net/UnrealNetwork.h"

USN2ConstructableComponent::USN2ConstructableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ConstructionProgress = 0.00f;
    this->SaveHandle = NULL;
}

void USN2ConstructableComponent::SetConstructionProgressToFull() {
}

void USN2ConstructableComponent::SetConstructionProgressToEmpty() {
}

bool USN2ConstructableComponent::SetConstructionProgress(float Progress) {
    return false;
}

void USN2ConstructableComponent::SetConstructableParams(const FSN2ConstructableParams& ConstructionParams) {
}

void USN2ConstructableComponent::OnRep_Progress() {
}

float USN2ConstructableComponent::GetFinishingProgress() const {
    return 0.0f;
}

float USN2ConstructableComponent::GetConstructionProgress() const {
    return 0.0f;
}

FSN2BuilderConstructionInfo USN2ConstructableComponent::GetConstructionInfo(ASN2BuilderTool* builder) {
    return FSN2BuilderConstructionInfo{};
}

void USN2ConstructableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USN2ConstructableComponent, ConstructionProgress);
    DOREPLIFETIME(USN2ConstructableComponent, PaidCost);
    DOREPLIFETIME(USN2ConstructableComponent, UnpaidCost);
    DOREPLIFETIME(USN2ConstructableComponent, ConstructableParams);
}


