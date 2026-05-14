#include "UWEWorldPopCreaturesSubsystem.h"
#include "Templates/SubclassOf.h"
#include "UWECreatureSpawnBalancer.h"

UUWEWorldPopCreaturesSubsystem::UUWEWorldPopCreaturesSubsystem() {
    this->SmallCreaturePopulationCount = 0;
    this->SpawnBalancer = CreateDefaultSubobject<UUWECreatureSpawnBalancer>(TEXT("WorldPopCreatureSpawnBalancer"));
    this->bIsCreatureSubsystemEnabled = true;
    this->SaveHandle = NULL;
    this->PersistentGameTime = 0.00f;
    this->LoadingScreenManager = NULL;
}

void UUWEWorldPopCreaturesSubsystem::UnregisterExistingCreature(const FGuid& SpawnId) {
}

AActor* UUWEWorldPopCreaturesSubsystem::RequestSpawnManagedCreature(const FGuid& SpawnId, TSubclassOf<AActor> CreatureClass, const FTransform& SpawnTransform, bool bPersistentLocation, FUWEWorldPopCreatureData CreatureData) {
    return NULL;
}

void UUWEWorldPopCreaturesSubsystem::RegisterExistingCreature(AActor* creature, const FGuid& SpawnId, bool bIsPersistent, FGameplayTagContainer RespawnAllowEncroachingTags, FUWEWorldPopCreatureData CreatureData) {
}

void UUWEWorldPopCreaturesSubsystem::ManagedCreatureDestroyed(AActor* DestroyedActor) {
}

ECreatureSpawnStatus UUWEWorldPopCreaturesSubsystem::GetCreatureSpawnStatus(const FGuid& SpawnId) const {
    return ECreatureSpawnStatus::Invalid;
}

void UUWEWorldPopCreaturesSubsystem::GetCreatureSpawnsInRange(const UWorld* InWorldContext, const FVector& FromLocation, float Range, TSoftClassPtr<AActor> CreatureFilter, TArray<FVector>& OutSpawnLocations) const {
}

FGuid UUWEWorldPopCreaturesSubsystem::GetCreatureSpawnIDForActor(AActor* creature) const {
    return FGuid{};
}


