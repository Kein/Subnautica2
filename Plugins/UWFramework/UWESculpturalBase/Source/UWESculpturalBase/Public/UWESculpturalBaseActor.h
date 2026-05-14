#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "UWEPowerSystemProvider.h"
#include "UWESaveGameCustomSerialize.h"
#include "LockedCellGroup.h"
#include "OnInitialReplicationCompleteDelegate.h"
#include "PropList.h"
#include "Templates/SubclassOf.h"
#include "UWEBaseMaterialOverrideList.h"
#include "UWECellSerializationContext.h"
#include "UWEDeconstructGroupKey.h"
#include "UWEDeconstructGroups.h"
#include "UWEDecoratorMatch.h"
#include "UWERemovedProp.h"
#include "UWESculpturalBaseCell.h"
#include "UWEStructure.h"
#include "UWESculpturalBaseActor.generated.h"

class ULevel;
class UObject;
class UUWEBaseInitialPieceData;
class UUWEPowerSystemComponent;
class UUWESaveComponent;
class UUWESavedBaseData;
class UUWESculpturalBaseSerializationWorker;
class UWorld;

UCLASS()
class UWESCULPTURALBASE_API AUWESculpturalBaseActor : public AActor, public IUWEPowerSystemProvider, public IUWESaveGameCustomSerialize {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEditApplied);
    
    UPROPERTY()
    FOnEditApplied OnEditApplied;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShouldHaveAirVolumes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsIndividualGrid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector IndividualGridLockingDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool GeneratePowerSystemsForStructures;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UUWESavedBaseData* InitialBaseData;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FIntVector, FUWESculpturalBaseCell> CellMap;
    
    UPROPERTY(SaveGame)
    int32 NumSavedCells;
    
    UPROPERTY(SaveGame)
    FUWECellSerializationContext CellSerializationContext;
    
    UPROPERTY(SaveGame)
    int32 TotalCells;
    
    UPROPERTY(EditAnywhere)
    UUWEBaseInitialPieceData* InitialPiece;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(SaveGame)
    TMap<FString, FPropList> RemovedProps;
    
protected:
    UPROPERTY(Transient)
    TArray<UObject*> QueuedEditActions;
    
    UPROPERTY(SaveGame, ReplicatedUsing=OnRep_BaseNetworkGUID)
    FGuid BaseNetworkGUID;
    
    UPROPERTY(SaveGame)
    TMap<int32, FLockedCellGroup> LockedCellGroups;
    
    UPROPERTY()
    TMap<FGuid, TWeakObjectPtr<AActor>> ClientLockOwnerMap;
    
    UPROPERTY(SaveGame)
    uint32 NextLockID;
    
    UPROPERTY(SaveGame)
    uint8 NextStructureID;
    
    UPROPERTY(SaveGame)
    TMap<uint8, FUWEStructure> Structures;
    
    UPROPERTY(SaveGame)
    TMap<uint8, FGuid> StructurePowerSystemIds;
    
    UPROPERTY(ReplicatedUsing=OnRep_StructureArray)
    TArray<FUWEStructure> StructureArray;
    
    UPROPERTY(SaveGame)
    FGuid ExternalLockedCellOwningBase;
    
    UPROPERTY(SaveGame)
    int32 ExternalLockID;
    
    UPROPERTY(SaveGame)
    TMap<FIntVector, FIntVector> ExternalLockedCells;
    
    UPROPERTY(SaveGame)
    TMap<FUWEDeconstructGroupKey, FUWEDeconstructGroups> DeconstructGroups;
    
    UPROPERTY(Replicated, SaveGame)
    uint32 NextDeconstructGroupID;
    
    UPROPERTY()
    FUWEBaseMaterialOverrideList MaterialOverrides;
    
    UPROPERTY(SaveGame)
    TMap<uint32, FUWEDecoratorMatch> DecoratorMatches;
    
    UPROPERTY(Replicated, SaveGame)
    uint32 NextDecoratorID;
    
    UPROPERTY(Replicated, SaveGame)
    uint32 Version;
    
    UPROPERTY(Replicated, SaveGame)
    uint32 LooseVersion;
    
    UPROPERTY(SaveGame)
    uint32 LastUpdatedVersion;
    
    UPROPERTY(BlueprintAssignable)
    FOnInitialReplicationComplete OnInitialReplicationComplete;
    
    UPROPERTY(Transient)
    UUWESculpturalBaseSerializationWorker* SerializationWorker;
    
public:
    AUWESculpturalBaseActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnStructureIsPoweredChanged(UUWEPowerSystemComponent* PowerSystem, bool IsPowered);
    
    UFUNCTION()
    void OnRep_StructureArray();
    
    UFUNCTION()
    void OnRep_BaseNetworkGUID();
    
public:
    UFUNCTION()
    void OnLevelAddedToWorld(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintPure)
    bool HasOxygen(int32 StructureId) const;
    
    UFUNCTION(BlueprintPure)
    float GetStructureVolume(uint8 StructureId) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCellOriginalBrushType(FIntVector Coords) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCellBrushType(FIntVector Coords) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCellBaseBrushType(FIntVector Coords) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsOfClassAttachedToStructure(TSubclassOf<AActor> Class, uint8 StructureId, TArray<AActor*>& OutActors) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActorsAttachedToStructure(uint8 StructureId) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceFullBaseUpdate(bool ForInitialSetup, bool UpdateCells, bool UpdateProxies);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastMarkPropsRemovedByBase(const TArray<FUWERemovedProp>& PropsToRemove);
    

    // Fix for true pure virtual functions not being implemented
};

