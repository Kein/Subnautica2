#include "UWESeedGrowerReplicatorComponent.h"
#include "Net/UnrealNetwork.h"

UUWESeedGrowerReplicatorComponent::UUWESeedGrowerReplicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWESeedGrowerReplicatorComponent::OnRep_GrowthData(const TArray<FUWEGrowthData>& OldGrowthData) {
}

void UUWESeedGrowerReplicatorComponent::MulticastSeedPickedUp_Implementation(AActor* Seed, uint32 SeedGrowerIndex) {
}

void UUWESeedGrowerReplicatorComponent::MultiCastSeedDropped_Implementation(AActor* Seed, uint32 SeedGrowerIndex) {
}

void UUWESeedGrowerReplicatorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWESeedGrowerReplicatorComponent, GrowthData);
}


