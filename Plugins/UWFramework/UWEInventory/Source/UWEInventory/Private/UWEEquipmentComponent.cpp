#include "UWEEquipmentComponent.h"
#include "Net/UnrealNetwork.h"

UUWEEquipmentComponent::UUWEEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachComponent = NULL;
    this->SaveHandle = NULL;
    this->PendingFirstEquipItemType = NULL;
}

void UUWEEquipmentComponent::UnequipAndDestroyAll() {
}

void UUWEEquipmentComponent::SetEquipmentHidden(bool bHidden) {
}

void UUWEEquipmentComponent::ServerUnloadTool_Implementation(AUWEBaseEquippable* Tool) {
}

void UUWEEquipmentComponent::ServerUnequipTool_Implementation() {
}

void UUWEEquipmentComponent::ServerUnequipToInventory_Implementation(AUWEBaseItem* Equippable, bool bNotify) {
}

void UUWEEquipmentComponent::ServerUnequipAndDrop_Implementation(AUWEBaseItem* Equippable) {
}

void UUWEEquipmentComponent::ServerUnequip_Implementation(AUWEBaseItem* Equippable) {
}

void UUWEEquipmentComponent::ServerReloadTool_Implementation(AUWEBaseEquippable* Tool, FUWEInventoryItemId ItemId) {
}

void UUWEEquipmentComponent::ServerEquipFromInventory_Implementation(FUWEInventoryItemId ItemId, UUWEInventoryComponent* Inventory) {
}

void UUWEEquipmentComponent::ServerEquip_Implementation(AUWEBaseItem* Equippable) {
}

bool UUWEEquipmentComponent::RemoveItemByType(UUWEItemType* ItemType) {
    return false;
}

void UUWEEquipmentComponent::OnRep_EquippedItems() {
}

void UUWEEquipmentComponent::OnItemDestroyed(AActor* DestroyedActor) {
}

void UUWEEquipmentComponent::OnEventVerbEquip(FUWEEventKey EventKey, int32 OldValue, int32 NewValue) {
}

bool UUWEEquipmentComponent::IsItemTypeTool(UUWEItemType* ItemType) {
    return false;
}

bool UUWEEquipmentComponent::HasItemByType(UUWEItemType* ItemType) {
    return false;
}

FName UUWEEquipmentComponent::GetSocketName(FGameplayTag SlotTag) {
    return NAME_None;
}

UUWEToolbarComponent* UUWEEquipmentComponent::GetOwnerToolbar() const {
    return NULL;
}

UUWEInventoryComponent* UUWEEquipmentComponent::GetOwnerInventory() {
    return NULL;
}

AUWEBaseItem* UUWEEquipmentComponent::GetEquippedTool() {
    return NULL;
}

AUWEBaseItem* UUWEEquipmentComponent::GetEquippableInSlot(FGameplayTag SlotTag) {
    return NULL;
}

USceneComponent* UUWEEquipmentComponent::GetAttachComponent() const {
    return NULL;
}

bool UUWEEquipmentComponent::CanEquipFromWorld(AUWEBaseItem* Equippable, FGameplayTag& Reason) {
    return false;
}

bool UUWEEquipmentComponent::CanEquipFromInventory(FUWEInventoryItemId ItemId, FGameplayTag& Reason, UUWEInventoryComponent* Inventory) {
    return false;
}

void UUWEEquipmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEEquipmentComponent, EquippedItems);
}


