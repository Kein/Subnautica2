#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEServerWorldSubsystem.h"
#include "UWERuntimeResourceInfo.h"
#include "UWEWorldPopSubsystem.generated.h"

class AActor;
class UUWESaveHandle;

UCLASS(BlueprintType)
class UWEWORLDPOPULATION2_API UUWEWorldPopSubsystem : public UUWEServerWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGuid, FUWERuntimeResourceInfo> SpawnedResources;
    
    UPROPERTY(Transient)
    TMap<TSoftObjectPtr<AActor>, FGuid> SpawnedResourceToGuidMap;
    
    UPROPERTY(Transient)
    TSet<FGuid> FailedToSpawnResources;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> RemovedResources;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> ResourcesToRespawn;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, float> RespawnTimers;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, uint32> SpawnIterationCounters;
    
    UPROPERTY(SaveGame)
    TMap<FGuid, uint8> ResourceInstanceGatherStates;
    
    UPROPERTY(Transient)
    TArray<TSoftClassPtr<AActor>> DisabledClasses;
    
public:
    UUWEWorldPopSubsystem();

private:
    UFUNCTION()
    void OnSpawnedResourceDestroyed(AActor* SpawnedResource);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableSpawnForClass(TSoftClassPtr<AActor> Class);
    
};

