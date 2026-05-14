#include "UWEToolbarComponent.h"
#include "Net/UnrealNetwork.h"

UUWEToolbarComponent::UUWEToolbarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumSlots = 0;
    this->bEnabled = true;
    this->bEquippingAllowed = true;
    this->bHolstering = false;
    this->SaveHandle = NULL;
    this->UWEBaseNumToolbarSlots = 5;
    this->TargetInventoryAfterHolstering = NULL;
}

void UUWEToolbarComponent::UnEquipEquippedTool() {
}

void UUWEToolbarComponent::SetNumSlots(int32 NewNumSlots) {
}

void UUWEToolbarComponent::SetEquippingAllowed(bool bInEquippingAllowed) {
}

void UUWEToolbarComponent::SetEnabled_Implementation(bool bInEnabled) {
}

void UUWEToolbarComponent::ServerSwitchToSlot_Implementation(int32 NewSlotNumber) {
}

void UUWEToolbarComponent::ServerSwapSlots_Implementation(int32 FromIndex, int32 ToIndex) {
}

void UUWEToolbarComponent::ServerRemoveFromSlot_Implementation(int32 SlotNumber) {
}

void UUWEToolbarComponent::ServerMoveFromSlotToInventory_Implementation(int32 SlotNumber, UUWEInventoryComponent* Inventory) {
}

void UUWEToolbarComponent::ServerDropFromToolbarSlot_Implementation(int32 SlotNumber) {
}

void UUWEToolbarComponent::ServerDestroyToolbarSlot_Implementation(int32 SlotNumber) {
}

FUWEToolbarItem UUWEToolbarComponent::ServerAddToolbarItemFromInventory(FUWEInventoryItemId ItemId, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory) {
    return FUWEToolbarItem{};
}

void UUWEToolbarComponent::RemoveFromSlot(int32 SlotNumber) {
}

void UUWEToolbarComponent::RefreshToolbar() {
}

void UUWEToolbarComponent::OnToolChanged(AUWEBaseItem* OldTool, AUWEBaseItem* NewTool, bool bIsFirstTimeEquipped) {
}

void UUWEToolbarComponent::OnRep_ToolbarItems() {
}

void UUWEToolbarComponent::OnRep_NumSlots() {
}

void UUWEToolbarComponent::OnRep_Holstering() {
}

void UUWEToolbarComponent::OnRep_Enabled() {
}

void UUWEToolbarComponent::OnRep_DesiredTool() {
}

void UUWEToolbarComponent::MoveFromSlotToInventory(int32 SlotNumber, UUWEInventoryComponent* Inventory) {
}

bool UUWEToolbarComponent::IsToolbarItemType(UUWEItemType* ItemType) {
    return false;
}

bool UUWEToolbarComponent::IsSlotEquipped(int32 SlotNumber) {
    return false;
}

bool UUWEToolbarComponent::IsHolstering() const {
    return false;
}

void UUWEToolbarComponent::InternalRemoveFromSlot(int32 SlotNumber, UUWEInventoryComponent* InInventory) {
}

void UUWEToolbarComponent::InternalMoveFromSlotToTargetInventory(int32 SlotNumber) {
}

void UUWEToolbarComponent::InteractWithItemInSlot_Implementation(int32 SlotNumber) {
}

void UUWEToolbarComponent::HolsterCurrentSlot() {
}

bool UUWEToolbarComponent::HasSlotEquipped(int32 SlotNumber) {
    return false;
}

bool UUWEToolbarComponent::HasItemInSlot(int32 SlotNumber) {
    return false;
}

bool UUWEToolbarComponent::HasFreeSlots() {
    return false;
}

bool UUWEToolbarComponent::HasEnergyForSlot(int32 SlotNumber) {
    return false;
}

TArray<FUWEToolbarItem> UUWEToolbarComponent::GetToolbarItemsForType(const UUWEItemType* ItemType) {
    return TArray<FUWEToolbarItem>();
}

FUWEToolbarItem UUWEToolbarComponent::GetSlotToolbarItem(int32 SlotNumber) {
    return FUWEToolbarItem{};
}

UUWEInventoryComponent* UUWEToolbarComponent::GetInventory() const {
    return NULL;
}

int32 UUWEToolbarComponent::GetEquippedSlot() {
    return 0;
}

float UUWEToolbarComponent::GetEnergyPercentForSlot(int32 SlotNumber) {
    return 0.0f;
}

int32 UUWEToolbarComponent::GetDesiredSlot() {
    return 0;
}

int32 UUWEToolbarComponent::GetBaseSlotCount() const {
    return 0;
}

int32 UUWEToolbarComponent::GetActorSlot(AActor* Actor) {
    return 0;
}

AActor* UUWEToolbarComponent::GetActorInSlot(int32 SlotNumber) {
    return NULL;
}

int32 UUWEToolbarComponent::GetActiveActorSlot() {
    return 0;
}

int32 UUWEToolbarComponent::FindSlotForItem(int32 SlotNumber) {
    return 0;
}

void UUWEToolbarComponent::EquipNextTool(bool bRight) {
}

void UUWEToolbarComponent::EquipFromSlot(int32 SlotNumber) {
}

AActor* UUWEToolbarComponent::DropFromToolbarSlotInternal(int32 SlotNumber, bool bIgnoreTagRequirements) {
    return NULL;
}

void UUWEToolbarComponent::DropEquippedTool() {
}

void UUWEToolbarComponent::DestroyAllItems_Implementation() {
}

bool UUWEToolbarComponent::CanAddInventoryItem(FUWEInventoryItemId ItemId, FGameplayTag& Reason, int32 SlotNumber, UUWEInventoryComponent* Inventory) {
    return false;
}

void UUWEToolbarComponent::BroadcastToolbarChanged() {
}

void UUWEToolbarComponent::AddToolbarItemTypeFromInventory(UUWEItemType* ItemType, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory) {
}

void UUWEToolbarComponent::AddToolbarItemFromInventory_Implementation(FUWEInventoryItemId ItemId, int32 SlotNumber, bool bEquip, UUWEInventoryComponent* Inventory) {
}

void UUWEToolbarComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEToolbarComponent, NumSlots);
    DOREPLIFETIME(UUWEToolbarComponent, bEnabled);
    DOREPLIFETIME(UUWEToolbarComponent, ToolbarItems);
    DOREPLIFETIME(UUWEToolbarComponent, bHolstering);
    DOREPLIFETIME(UUWEToolbarComponent, DesiredTool);
}


