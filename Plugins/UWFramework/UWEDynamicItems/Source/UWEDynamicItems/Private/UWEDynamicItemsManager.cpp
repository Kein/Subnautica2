#include "UWEDynamicItemsManager.h"

UUWEDynamicItemsManager::UUWEDynamicItemsManager() {
    this->SaveHandle = NULL;
}

void UUWEDynamicItemsManager::UnregisterActor(AActor* Actor) {
}

AActor* UUWEDynamicItemsManager::SpawnActorAndRegisterWithoutDropping(UClass* ActorClass, const FTransform& Transform, FGuid Guid) {
    return NULL;
}

AActor* UUWEDynamicItemsManager::SpawnActorAndRegisterWithGuid(UClass* ActorClass, const FTransform& Transform, FGuid Guid) {
    return NULL;
}

AActor* UUWEDynamicItemsManager::SpawnActorAndRegister(UClass* ActorClass, const FTransform& Transform) {
    return NULL;
}

void UUWEDynamicItemsManager::SetSpawnRange(float InRange) {
}

void UUWEDynamicItemsManager::SetRemoveIfOutOfRange(AActor* Actor, bool bValue) {
}

void UUWEDynamicItemsManager::SetActorLifespan(AActor* Actor, float LifeSpan) {
}

void UUWEDynamicItemsManager::Reset() {
}

void UUWEDynamicItemsManager::RegisterActor(AActor* Actor) {
}

void UUWEDynamicItemsManager::OnSavePerformed() {
}

void UUWEDynamicItemsManager::OnActorDestroyed(AActor* DestroyedActor) {
}

bool UUWEDynamicItemsManager::IsInRange(AActor* Actor) {
    return false;
}

void UUWEDynamicItemsManager::GetSavedCountsByClassName(TMap<FString, int32>& ClassCounts) {
}

int32 UUWEDynamicItemsManager::GetNumSaved() {
    return 0;
}

int32 UUWEDynamicItemsManager::GetNumActive() {
    return 0;
}

void UUWEDynamicItemsManager::GetActiveCountsByClassName(TMap<FString, int32>& ClassCounts) {
}


