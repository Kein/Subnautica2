#include "UWEInventorySubsystem.h"
#include "Templates/SubclassOf.h"

UUWEInventorySubsystem::UUWEInventorySubsystem() {
    this->SaveHandle = NULL;
    this->NumInventoriesPerStorageActor = 20;
    this->HighestInventoryId = 0;
}

bool UUWEInventorySubsystem::ServerAddItemTypeToInventory(const int32& InventoryId, UUWEItemType* ItemType, int32 Count) {
    return false;
}

void UUWEInventorySubsystem::RemoveItemByType(const int32& InventoryId, UUWEItemType* ItemType) {
}

void UUWEInventorySubsystem::RemoveItem(const int32& InventoryId, const FUWEInventoryItemId& ItemId) {
}

void UUWEInventorySubsystem::RemoveAllItemsForActor(const AActor* Actor) {
}

void UUWEInventorySubsystem::RemoveAllItems(const int32& InventoryId) {
}

void UUWEInventorySubsystem::RefreshStorageActors() {
}

void UUWEInventorySubsystem::OnStorageActorDestroyed(AActor* DestroyedActor) {
}

void UUWEInventorySubsystem::OnSavePerformed() {
}

int32 UUWEInventorySubsystem::NumItems(const int32& InventoryId) {
    return 0;
}

bool UUWEInventorySubsystem::MoveInventoryItem(const FUWEInventoryItemId& ItemId, const int32& FromInventoryId, const int32& ToInventoryId) {
    return false;
}

bool UUWEInventorySubsystem::IsInventoryValid(const int32& InventoryId) {
    return false;
}

bool UUWEInventorySubsystem::IsInventoryFull(const int32& InventoryId) {
    return false;
}

bool UUWEInventorySubsystem::IsInventoryCommunal(const int32& InventoryId) {
    return false;
}

bool UUWEInventorySubsystem::HasAnyOfItemType(const int32& InventoryId, UUWEItemType* ItemType) {
    return false;
}

FUWEInventoryStorageContainer UUWEInventorySubsystem::GetStorageContainerForInventory(const int32& InventoryId) {
    return FUWEInventoryStorageContainer{};
}

TMap<int32, TWeakObjectPtr<AUWEInventoryStorage>> UUWEInventorySubsystem::GetStorageActors() {
    return TMap<int32, TWeakObjectPtr<AUWEInventoryStorage>>();
}

int32 UUWEInventorySubsystem::GetMaxItemsForInventory(const int32& InventoryId) {
    return 0;
}

TArray<FUWEInventoryItem> UUWEInventorySubsystem::GetItemsForInventory(const int32& InventoryId) {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItem> UUWEInventorySubsystem::GetItemsByItemType(const int32& InventoryId, UUWEItemType* ItemType) {
    return TArray<FUWEInventoryItem>();
}

TArray<FUWEInventoryItemId> UUWEInventorySubsystem::GetItemIdsByItemType(const int32& InventoryId, const UUWEItemType* ItemType) {
    return TArray<FUWEInventoryItemId>();
}

FUWEInventoryItem UUWEInventorySubsystem::GetItem(const int32& InventoryId, const FUWEInventoryItemId& ItemId) {
    return FUWEInventoryItem{};
}

TSubclassOf<AActor> UUWEInventorySubsystem::GetActorClassForInventory(const int32& InventoryId) {
    return NULL;
}

AUWEInventoryStorage* UUWEInventorySubsystem::FindStorageActorForInventory(const int32& InventoryId) {
    return NULL;
}

bool UUWEInventorySubsystem::CanAddItemToInventory(const int32& InventoryId, const FUWEInventoryItem& Item, FGameplayTag& Reason, bool bCanOverflow) {
    return false;
}

void UUWEInventorySubsystem::AddItemTypeToInventory(const int32& InventoryId, UUWEItemType* ItemType, int32 Count) {
}

FUWEInventoryItemId UUWEInventorySubsystem::AddInventoryItem(const int32& InventoryId, const FUWEInventoryItem& Item) {
    return FUWEInventoryItemId{};
}


