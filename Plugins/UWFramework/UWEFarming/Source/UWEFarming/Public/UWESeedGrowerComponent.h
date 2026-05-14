#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "UWESaveObject.h"
#include "EUWEGrowthFunction.h"
#include "EUWESeedSpawnType.h"
#include "UWEGrowthData.h"
#include "UWESeedGrowerComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class UUWESaveHandle;
class UUWESeedGrowerComponent;
class UUWESeedGrowerReplicatorComponent;
class UUWESeedProgressInteractComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEFARMING_API UUWESeedGrowerComponent : public USceneComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeedSpawnedDelegate, AActor*, Seed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeedRipedDelegate, AActor*, Seed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSeedRemovedDelegate, AActor*, Seed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSeedPickedUpDelegate, UUWESeedGrowerComponent*, SeedGrower, AActor*, Seed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSeedDroppedDelegate, UUWESeedGrowerComponent*, SeedGrower, AActor*, Seed);
    
    UPROPERTY(BlueprintAssignable)
    FSeedSpawnedDelegate OnSeedSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FSeedRemovedDelegate OnSeedRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FSeedPickedUpDelegate OnSeedPickedUp;
    
    UPROPERTY(BlueprintAssignable)
    FSeedPickedUpDelegate OnSeedDropped;
    
    UPROPERTY(BlueprintAssignable)
    FSeedRipedDelegate OnSeedRipened;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TSoftClassPtr<AActor> SeedClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> SeedClassVariances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWESeedSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartsGrown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HighPrioritySpawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpawnTimeVariance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float RipenTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUWEGrowthFunction RipenFunction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector OffsetLocation;
    
    UPROPERTY(EditAnywhere)
    float MinScale;
    
private:
    UPROPERTY(Instanced, Transient)
    UUWESeedGrowerReplicatorComponent* Replicator;
    
    UPROPERTY(SaveGame)
    bool bInitiallySpawned;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    bool bSeedPresent;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    float SpawnTimerStartTime;
    
    UPROPERTY(AdvancedDisplay, SaveGame, VisibleAnywhere)
    int32 SpawnedSeedClassIndex;
    
    UPROPERTY(AdvancedDisplay, SaveGame)
    FUWEGrowthData GrowthData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> SpawnSeedWithTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool ShowRipeningProgress;
    
    UPROPERTY(EditDefaultsOnly)
    FText SeedProgressFormatText;
    
    UPROPERTY(EditDefaultsOnly)
    FString SeedProgressPrimaryHintKey;
    
    UPROPERTY(Instanced, Transient)
    UUWESeedProgressInteractComponent* SeedProgressInteractComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector SeedProgressScale;
    
public:
    UUWESeedGrowerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryDropSeed(bool bGrowNewSeed);
    
    UFUNCTION(BlueprintCallable)
    void TryDestroySeed(bool bGrowNewSeed);
    
    UFUNCTION(BlueprintCallable)
    void StopSpawnTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartSpawnTimer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSeed(bool bSpawnFullyRipened);
    
    UFUNCTION(BlueprintPure)
    bool ShowProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGrowthRate(float NewGrowthRate);
    
private:
    UFUNCTION()
    void OnSetLifeSpanSeed();
    
    UFUNCTION()
    void OnPickedUpSeed(AActor* PickupActor);
    
    UFUNCTION()
    void OnPhysicsWakeSeed(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION()
    void OnOwnerDied(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION()
    void OnDestroySeed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlantFullyGrown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFarmTray() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSeed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFullyRipenedSeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION()
    AActor* GetSeedActor() const;
    
    UFUNCTION(BlueprintPure)
    float GetRipenedAmount() const;
    

    // Fix for true pure virtual functions not being implemented
};

