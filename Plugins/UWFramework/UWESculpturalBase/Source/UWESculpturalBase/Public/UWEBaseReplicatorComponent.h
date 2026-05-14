#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Net/Core/Connection/NetEnums.h"
#include "UWECoordinateSet.h"
#include "SerializedEditAction.h"
#include "UWEDeconstructGroupKey.h"
#include "UWEDecoratorMatch.h"
#include "UWERemovedProp.h"
#include "UWEBaseReplicatorComponent.generated.h"

class UNetDriver;
class UUWEBaseModule;
class UWorld;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCULPTURALBASE_API UUWEBaseReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReplicationFinished);
    
protected:
    UPROPERTY(Transient)
    TArray<UUWEBaseModule*> ServerModuleSet;
    
    UPROPERTY(Transient)
    TArray<FSerializedEditAction> PendingBaseEditActionQueue;
    
public:
    UUWEBaseReplicatorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server)
    void Server_FinishReplicatingBase(FGuid base);
    
    UFUNCTION()
    void HandleClientNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorString);
    
public:
    UFUNCTION()
    bool ClientHasFinishedReplication() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_SendServerModuleSet(const TArray<UUWEBaseModule*>& ModuleSet);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveRemovedProps(FGuid BaseGUID, const TArray<FUWERemovedProp>& Props);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveLockGroup(FGuid BaseGUID, int32 ID, FGuid LockOwner, const TArray<FIntVector>& Cells, uint8 Flags, int32 InventoryId);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveDecorators(FGuid BaseGUID, const TArray<FUWEDecoratorMatch>& Decorators);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveDeconstructGroup(FGuid BaseGUID, const FUWEDeconstructGroupKey& Key, const FUWECoordinateSet& Cells, uint32 ID);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceiveCells(FGuid BaseGUID, uint8 NextStructureID, int32 NumCells, const TArray<uint8>& CompressedData, int32 TotalDataSize, bool IsLastCellsBlock);
    
    UFUNCTION(Client, Reliable)
    void Client_MarkReplicationFinished();
    
    UFUNCTION(Client, Reliable)
    void Client_FinishInitialReplication();
    
    UFUNCTION(Client, Reliable)
    void Client_BeginInitialReplication(int32 NumBases);
    
public:
    UFUNCTION(Client, Reliable)
    void BroadcastApplyBaseEditAction(const FSerializedEditAction& ActionData);
    
};

