#include "UWEBaseReplicatorComponent.h"

UUWEBaseReplicatorComponent::UUWEBaseReplicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWEBaseReplicatorComponent::Server_FinishReplicatingBase_Implementation(FGuid base) {
}

void UUWEBaseReplicatorComponent::HandleClientNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorString) {
}

bool UUWEBaseReplicatorComponent::ClientHasFinishedReplication() const {
    return false;
}

void UUWEBaseReplicatorComponent::Client_SendServerModuleSet_Implementation(const TArray<UUWEBaseModule*>& ModuleSet) {
}

void UUWEBaseReplicatorComponent::Client_ReceiveRemovedProps_Implementation(FGuid BaseGUID, const TArray<FUWERemovedProp>& Props) {
}

void UUWEBaseReplicatorComponent::Client_ReceiveLockGroup_Implementation(FGuid BaseGUID, int32 ID, FGuid LockOwner, const TArray<FIntVector>& Cells, uint8 Flags, int32 InventoryId) {
}

void UUWEBaseReplicatorComponent::Client_ReceiveDecorators_Implementation(FGuid BaseGUID, const TArray<FUWEDecoratorMatch>& Decorators) {
}

void UUWEBaseReplicatorComponent::Client_ReceiveDeconstructGroup_Implementation(FGuid BaseGUID, const FUWEDeconstructGroupKey& Key, const FUWECoordinateSet& Cells, uint32 ID) {
}

void UUWEBaseReplicatorComponent::Client_ReceiveCells_Implementation(FGuid BaseGUID, uint8 NextStructureID, int32 NumCells, const TArray<uint8>& CompressedData, int32 TotalDataSize, bool IsLastCellsBlock) {
}

void UUWEBaseReplicatorComponent::Client_MarkReplicationFinished_Implementation() {
}

void UUWEBaseReplicatorComponent::Client_FinishInitialReplication_Implementation() {
}

void UUWEBaseReplicatorComponent::Client_BeginInitialReplication_Implementation(int32 NumBases) {
}

void UUWEBaseReplicatorComponent::BroadcastApplyBaseEditAction_Implementation(const FSerializedEditAction& ActionData) {
}


