#include "UWEInventoryComponent.h"
#include "Net/UnrealNetwork.h"

UUWEInventoryComponent::UUWEInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDespawned = false;
    this->InventoryId = -1;
    this->AllowAddingAnyItems = true;
    this->MaxItems = 18;
    this->bInventoryCanOverflow = false;
    this->InventoryName = FText::FromString(TEXT("Storage"));
    this->Columns = 5;
    this->bIsCommunal = false;
    this->bDisplayAsSorted = true;
    this->UseItemInputAction = NULL;
    this->SaveHandle = NULL;
}

bool UUWEInventoryComponent::UsesAFilter() const {
    return false;
}

bool UUWEInventoryComponent::TryGetItemAtIndex(int32 Index, FUWEInventoryItem& Item) {
    return false;
}

void UUWEInventoryComponent::SetMaxItems(int32 NewMaxItems) {
}

void UUWEInventoryComponent::SetAllowAddingItems(bool bAllowAddingItems) {
}

AActor* UUWEInventoryComponent::ServerDropItem(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory) {
    return NULL;
}

void UUWEInventoryComponent::RemoveItemFromInventory_Implementation(FUWEInventoryItemId ItemId, int32 FromInventoryId) {
}

bool UUWEInventoryComponent::RemoveItemByType(UUWEItemType* ItemType, int32 Count) {
    return false;
}

bool UUWEInventoryComponent::RemoveItem(FUWEInventoryItemId ItemId) {
    return false;
}

void UUWEInventoryComponent::RemoveAll() {
}

bool UUWEInventoryComponent::PickupItemAndGetID(AActor* ActorToPickup, FUWEInventoryItemId& OutItemID, bool bCanOverflow) {
    return false;
}

bool UUWEInventoryComponent::PickupItem(AActor* ActorToPickup, bool bCanOverflow) {
    return false;
}

bool UUWEInventoryComponent::PickupAndGetID(AActor* ActorToPickup, FUWEInventoryItemId& OutItemID, bool bNotify) {
    return false;
}

bool UUWEInventoryComponent::Pickup(AActor* ActorToPickup, bool bNotify) {
    return false;
}

void UUWEInventoryComponent::OnRep_MaxItems() {
}

void UUWEInventoryComponent::OnItemRemovedFromInventory(const int32& InInventoryId, const FUWEInventoryItem& Item) {
}

void UUWEInventoryComponent::OnItemAddedToInventory(const int32& InInventoryId, const FUWEInventoryItem& Item) {
}

void UUWEInventoryComponent::OnInventoryUpdated(const int32& InInventoryId) {
}

void UUWEInventoryComponent::OnInventoryItemAttributeChanged(const int32& InInventoryId, const FUWEInventoryItem& Item) {
}

int32 UUWEInventoryComponent::NumItems() const {
    return 0;
}

void UUWEInventoryComponent::MoveItemBetweenInventories_Implementation(FUWEInventoryItemId ItemId, int32 FromInventoryId, int32 ToInventoryId) {
}

void UUWEInventoryComponent::MoveInventoryItem_Implementation(UUWEInventoryComponent* ToInventory, FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory) {
}

void UUWEInventoryComponent::MoveAllInventoryItems_Implementation(UUWEInventoryComponent* ToInventory, UUWEInventoryComponent* FromInventory) {
}

void UUWEInventoryComponent::ItemPickedUpFailedClientNotify_Implementation(AActor* Actor) {
}

void UUWEInventoryComponent::ItemPickedUpClientNotify_Implementation(AActor* Actor) {
}

bool UUWEInventoryComponent::ItemIsFiltered(const UUWEItemType* ItemType) const {
    return false;
}

void UUWEInventoryComponent::ItemDroppedMulticastNotify_Implementation(AActor* Actor) {
}

bool UUWEInventoryComponent::IsFull() const {
    return false;
}

bool UUWEInventoryComponent::IsEmpty() const {
    return false;
}

bool UUWEInventoryComponent::InteractWithInventoryItemIsEnabled(FUWEInventoryItemId ItemId, FText& OutNotInteractableReason, AActor* Owner) {
    return false;
}

void UUWEInventoryComponent::InteractWithInventoryItem_Implementation(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory) {
}

bool UUWEInventoryComponent::HasSpaceForItems(const TArray<FUWEInventoryItem>& Items) const {
    return false;
}

bool UUWEInventoryComponent::HasAnyOfItemType(UUWEItemType* ItemType) const {
    return false;
}

UUWEItemType* UUWEInventoryComponent::GetItemType(FUWEInventoryItemId ItemId) const {
    return NULL;
}

TArray<FUWEInventoryItem> UUWEInventoryComponent::GetItemsRaw() const {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItem> UUWEInventoryComponent::GetItemsByType(const FGameplayTag Tag, bool bPartial) const {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItem> UUWEInventoryComponent::GetItemsByItemType(const UUWEItemType* ItemType) const {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItem> UUWEInventoryComponent::GetItems() const {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItemId> UUWEInventoryComponent::GetItemIds() const {
    return TArray<FUWEInventoryItemId>();
}

int32 UUWEInventoryComponent::GetItemCountByType(UUWEItemType* ItemType) const {
    return 0;
}

FUWEInventoryItem UUWEInventoryComponent::GetItem(FUWEInventoryItemId ItemId) const {
    return FUWEInventoryItem{};
}

UUWEInventorySubsystem* UUWEInventoryComponent::GetInventorySubsystem() const {
    return NULL;
}

int32 UUWEInventoryComponent::GetIndexOfItem(const FUWEInventoryItem& InventoryItem) const {
    return 0;
}

TArray<FUWEInventoryItem> UUWEInventoryComponent::FindItemsByGameplayTag(const FGameplayTagContainer Tags) const {
    return TArray<FUWEInventoryItem>();
}

void UUWEInventoryComponent::DropItem_Implementation(FUWEInventoryItemId ItemId, UUWEInventoryComponent* FromInventory) {
}

void UUWEInventoryComponent::DeleteAllInventoryItems_Implementation() {
}

bool UUWEInventoryComponent::CanPickupItemTypeWithQuantity(UUWEItemType* ItemType, FGameplayTag& Reason, int32 Quantity) {
    return false;
}

bool UUWEInventoryComponent::CanPickUpActor(AActor* Actor, const FHitResult HitResult, FGameplayTag& Reason) {
    return false;
}

bool UUWEInventoryComponent::CanDropItem(FUWEInventoryItemId ItemId, FGameplayTag& Reason, const UUWEInventoryComponent* InitiatingInventory) const {
    return false;
}

bool UUWEInventoryComponent::AddItemTypeToInventory(UUWEItemType* ItemType, int32 Quantity) {
    return false;
}

void UUWEInventoryComponent::AddItemByTypeToInventory_Implementation(int32 InInventoryId, UUWEItemType* ItemType, int32 Count) {
}

int32 UUWEInventoryComponent::AddAsMuchAsPossibleToInventory(UUWEItemType* ItemType, int32 Quantity) {
    return 0;
}

void UUWEInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUWEInventoryComponent, InventoryId);
    DOREPLIFETIME(UUWEInventoryComponent, AllowAddingAnyItems);
    DOREPLIFETIME(UUWEInventoryComponent, MaxItems);
}


