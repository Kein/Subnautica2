#include "UWEPinnedRecipesPlayerStateComponent.h"
#include "Net/UnrealNetwork.h"

UUWEPinnedRecipesPlayerStateComponent::UUWEPinnedRecipesPlayerStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxNumEntries = 8;
    this->SaveHandle = NULL;
}

void UUWEPinnedRecipesPlayerStateComponent::UnpinRecipe(UUWEPrimaryDataAssetBase* Recipe) {
}

void UUWEPinnedRecipesPlayerStateComponent::ServerUnpinRecipe_Implementation(UUWEPrimaryDataAssetBase* Recipe) {
}

void UUWEPinnedRecipesPlayerStateComponent::ServerPinRecipe_Implementation(UUWEPrimaryDataAssetBase* Recipe) {
}

void UUWEPinnedRecipesPlayerStateComponent::PinRecipe(UUWEPrimaryDataAssetBase* Recipe) {
}

bool UUWEPinnedRecipesPlayerStateComponent::IsPinned(UUWEPrimaryDataAssetBase* Recipe) const {
    return false;
}

void UUWEPinnedRecipesPlayerStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEPinnedRecipesPlayerStateComponent, PinnedRecipes);
}


