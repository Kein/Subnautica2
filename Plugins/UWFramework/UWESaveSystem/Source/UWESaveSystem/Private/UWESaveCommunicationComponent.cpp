#include "UWESaveCommunicationComponent.h"

UUWESaveCommunicationComponent::UUWESaveCommunicationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUWESaveCommunicationComponent::TriggerAsyncSaveGame_Implementation(const EUWESaveGameCollectionIndex Index) {
}

void UUWESaveCommunicationComponent::TriggerAsyncAutoSaveGame_Implementation(const bool bForce) {
}

void UUWESaveCommunicationComponent::ServerRequestStoreForSaveId_Implementation(const FString& SaveId) {
}

void UUWESaveCommunicationComponent::ServerRequestSaveSlotsMatchingCurrentContext_Implementation() {
}

void UUWESaveCommunicationComponent::ServerRequestLoadForSaveId_Implementation(const FString& SaveId) {
}

void UUWESaveCommunicationComponent::ServerRequestIsSavingBlocked_Implementation() {
}

void UUWESaveCommunicationComponent::ServerRequestDoesSaveGameExist_Implementation(const FString& SaveSlot) {
}

void UUWESaveCommunicationComponent::OnMetaDataScanComplete(const TArray<FUWESaveGameCollectionInfo>& SaveInfos) {
}

void UUWESaveCommunicationComponent::ClientReceiveSaveSlotsMatchingCurrentContext_Implementation(const TArray<FUWESlotInfoSimple>& SaveSlots) {
}

void UUWESaveCommunicationComponent::ClientReceiveIsSavingBlocked_Implementation(bool IsBlocked) {
}

void UUWESaveCommunicationComponent::ClientReceiveDoesSaveGameExist_Implementation(const bool Result) {
}

void UUWESaveCommunicationComponent::CheckIsSavingBlocked(UUWESaveCommunicationComponent::FIsSavingBlockedDelegate InDelegate) {
}

void UUWESaveCommunicationComponent::AutoSaveStarted_Implementation() {
}

void UUWESaveCommunicationComponent::AutoSaveCompleted_Implementation(bool Result) {
}

void UUWESaveCommunicationComponent::AsyncSaveGameStarted_Implementation() {
}

void UUWESaveCommunicationComponent::AsyncSaveGameCompleted_Implementation(bool Result) {
}

void UUWESaveCommunicationComponent::AnySaveStarted_Implementation() {
}


