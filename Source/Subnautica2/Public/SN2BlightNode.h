#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "UWEActorUID.h"
#include "UWESerializedLevelSequenceActor.h"
#include "EBlightNodeState.h"
#include "SN2BlightNodeCreatureSpawnPoint.h"
#include "SN2BlightNode.generated.h"

class AActor;
class ASN2BlightNodeDamagePoint;
class AUWEPlaceableProxy;
class USN2BlightNodeDataAsset;
class USceneComponent;
class UUWEAbilitySystemComponent;

UCLASS()
class SUBNAUTICA2_API ASN2BlightNode : public AUWESerializedLevelSequenceActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, EBlightNodeState, NewState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatureSpawned, AActor*, creature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatureDied, AActor*, creature);
    
    UPROPERTY(BlueprintAssignable)
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnCreatureSpawned OnCreatureSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnCreatureDied OnCreatureDied;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* InfectionCenterPoint;
    
protected:
    UPROPERTY(BlueprintReadOnly, SaveGame, ReplicatedUsing=OnRep_NodeState)
    EBlightNodeState NodeState;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUWEAbilitySystemComponent* ASC;
    
private:
    UPROPERTY(EditAnywhere)
    USN2BlightNodeDataAsset* DataAsset;
    
    UPROPERTY(EditAnywhere)
    TSet<AUWEPlaceableProxy*> DamagePoints;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag StateRemediatedCue;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag StateActiveCue;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag InfectedLoopingCue;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag CreatureSpawnedCue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSN2BlightNodeCreatureSpawnPoint> SpawnPoints;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> CreatureToSpawn;
    
    UPROPERTY(EditAnywhere)
    float CreatureSpawnInterval;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCreaturesToSpawn;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCreaturesPerSpawn;
    
    UPROPERTY(EditAnywhere)
    bool bDestroyActiveParasitesOnRemediate;
    
    UPROPERTY(SaveGame)
    float LastSpawnTime;
    
    UPROPERTY(SaveGame)
    bool bFirstSpawn;
    
    UPROPERTY(SaveGame)
    TArray<FGuid> SpawnedCreatureDynamicItemIDs;
    
    UPROPERTY(Replicated, SaveGame)
    TArray<FUWEActorUID> DestroyedPoints;
    
public:
    ASN2BlightNode(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void SpawnCreaturesLoop();
    
    UFUNCTION()
    void OnSpawnedCreatureKilled(AActor* SourceActor, AActor* TargetActor);
    
    UFUNCTION()
    void OnRep_NodeState();
    
    UFUNCTION()
    void OnBroken(ASN2BlightNodeDamagePoint* DamagePoint, const AActor* InInstigator);
    
protected:
    UFUNCTION()
    void OnActorEndOverlapImplementation(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnActorBeginOverlapImplementation(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintPure)
    EBlightNodeState GetNodeState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDestroyedDamagePointCount() const;
    
    UFUNCTION(BlueprintPure)
    USN2BlightNodeDataAsset* GetBlightNodeDataAsset() const;
    
};

