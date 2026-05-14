#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWEServerWorldSubsystem.h"
#include "UWEDynamicItemsSave.h"
#include "UWEDynamicItemsManager.generated.h"

class AActor;
class AUWEPlaceableProxy;
class UUWESaveHandle;

UCLASS(BlueprintType)
class UWEDYNAMICITEMS_API UUWEDynamicItemsManager : public UUWEServerWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    FUWEDynamicItemsSave DynamicItemsSave;
    
    UPROPERTY(SaveGame)
    TSet<FGuid> InactiveProxies;
    
    UPROPERTY()
    TMap<FGuid, AActor*> ActiveActorsByID;
    
    UPROPERTY()
    TMap<AActor*, FGuid> IDsByActor;
    
    UPROPERTY()
    TMap<AActor*, AUWEPlaceableProxy*> ActorsFromProxies;
    
public:
    UUWEDynamicItemsManager();

    UFUNCTION(BlueprintCallable)
    static void UnregisterActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorAndRegisterWithoutDropping(UClass* ActorClass, const FTransform& Transform, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorAndRegisterWithGuid(UClass* ActorClass, const FTransform& Transform, FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorAndRegister(UClass* ActorClass, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnRange(float InRange);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveIfOutOfRange(AActor* Actor, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLifespan(AActor* Actor, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    static void RegisterActor(AActor* Actor);
    
protected:
    UFUNCTION()
    void OnSavePerformed();
    
    UFUNCTION()
    void OnActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInRange(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void GetSavedCountsByClassName(TMap<FString, int32>& ClassCounts);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumSaved();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumActive();
    
    UFUNCTION(BlueprintCallable)
    void GetActiveCountsByClassName(TMap<FString, int32>& ClassCounts);
    
};

