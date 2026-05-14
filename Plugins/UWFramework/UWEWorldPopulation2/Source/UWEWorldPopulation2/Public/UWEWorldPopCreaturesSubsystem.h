#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEWorldPopCreatureData.h"
#include "UWEServerWorldSubsystem.h"
#include "ECreatureSpawnStatus.h"
#include "Templates/SubclassOf.h"
#include "UWEPersistentCreatureSaveInfo.h"
#include "UWEPersistentCreatureUpdateTime.h"
#include "UWEQueuedSpawnPoint.h"
#include "UWERuntimeCreatureTypeInfo.h"
#include "UWESpawnedCreatureInfo.h"
#include "UWEWorldPopCreaturesSubsystem.generated.h"

class AActor;
class ULoadingScreenManager;
class UUWECreatureSpawnBalancer;
class UUWESaveHandle;
class UUWEWorldPopCreaturePopulationDA;
class UWorld;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldPopCreaturesSubsystem : public UUWEServerWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGuid, FUWESpawnedCreatureInfo> SpawnedCreatures;
    
    UPROPERTY(Transient)
    TMap<TSoftClassPtr<AActor>, FUWERuntimeCreatureTypeInfo> RuntimeCreatureTypeInfo;
    
    UPROPERTY(Transient)
    int32 SmallCreaturePopulationCount;
    
    UPROPERTY(Transient)
    TMap<FGuid, FVector> SpawnLocationOverrides;
    
    UPROPERTY(Transient)
    TSet<FSoftObjectPath> StreamingCreatureClasses;
    
    UPROPERTY(Transient)
    TSet<TSoftClassPtr<AActor>> DisabledClasses;
    
    UPROPERTY(Transient)
    TMap<FGuid, float> BlockedSpawns;
    
    UPROPERTY(Transient)
    TMap<TSoftClassPtr<AActor>, UUWEWorldPopCreaturePopulationDA*> CreaturePopulationSettings;
    
    UPROPERTY()
    UUWECreatureSpawnBalancer* SpawnBalancer;
    
    UPROPERTY()
    bool bIsCreatureSubsystemEnabled;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    double PersistentGameTime;
    
    UPROPERTY(SaveGame)
    TArray<FUWEPersistentCreatureUpdateTime> ActivePersistentCreatureUpdates;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, FUWEPersistentCreatureSaveInfo> PersistentCreatures;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, uint32> SpawnIterationCounters;
    
    UPROPERTY()
    ULoadingScreenManager* LoadingScreenManager;
    
    UPROPERTY()
    TArray<FGuid> CreaturesRangeCheckQueue;
    
    UPROPERTY(Transient)
    TArray<FUWEQueuedSpawnPoint> QueuedSpawnPoints;
    
public:
    UUWEWorldPopCreaturesSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterExistingCreature(const FGuid& SpawnId);
    
    UFUNCTION(BlueprintCallable)
    AActor* RequestSpawnManagedCreature(const FGuid& SpawnId, TSubclassOf<AActor> CreatureClass, const FTransform& SpawnTransform, bool bPersistentLocation, FUWEWorldPopCreatureData CreatureData);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExistingCreature(AActor* creature, const FGuid& SpawnId, bool bIsPersistent, FGameplayTagContainer RespawnAllowEncroachingTags, FUWEWorldPopCreatureData CreatureData);
    
private:
    UFUNCTION()
    void ManagedCreatureDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    ECreatureSpawnStatus GetCreatureSpawnStatus(const FGuid& SpawnId) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="InWorldContext"))
    void GetCreatureSpawnsInRange(const UWorld* InWorldContext, const FVector& FromLocation, float Range, TSoftClassPtr<AActor> CreatureFilter, TArray<FVector>& OutSpawnLocations) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetCreatureSpawnIDForActor(AActor* creature) const;
    
};

