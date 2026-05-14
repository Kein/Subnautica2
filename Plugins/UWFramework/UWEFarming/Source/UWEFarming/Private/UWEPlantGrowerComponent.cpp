#include "UWEPlantGrowerComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPlantGrowerComponent::UUWEPlantGrowerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialGrowthPercentage = 1.00f;
    this->bScaleWithGrowth = true;
    this->Growth = 200.00f;
    this->MaxGrowth = 200.00f;
    this->GrowthRate = 1.00f;
    this->GrowthFunction = EUWEGrowthFunction::EaseInOut;
    this->SaveHandle = NULL;
}

void UUWEPlantGrowerComponent::SetGrowthPercentage(float Percentage) {
}

void UUWEPlantGrowerComponent::OnRep_MaxGrowth(float OldMaxGrowth) {
}

void UUWEPlantGrowerComponent::OnRep_Growth(float OldGrowth) {
}

void UUWEPlantGrowerComponent::OnDied(AActor* SourceActor, AActor* TargetActor) {
}

bool UUWEPlantGrowerComponent::IsFullyGrown() const {
    return false;
}

float UUWEPlantGrowerComponent::GetGrowthPercentage() const {
    return 0.0f;
}

void UUWEPlantGrowerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPlantGrowerComponent, Growth);
    DOREPLIFETIME(UUWEPlantGrowerComponent, MaxGrowth);
    DOREPLIFETIME(UUWEPlantGrowerComponent, GrowthRate);
}


