#include "UWEInventoryStatics.h"
#include "Templates/SubclassOf.h"

UUWEInventoryStatics::UUWEInventoryStatics() {
}

AActor* UUWEInventoryStatics::SpawnItemSynchronous(UObject* WorldContextObject, const UUWEItemType* ItemType, FTransform TargetTransform, bool ShouldSimulatePhysics, FGuid ItemGuid) {
    return NULL;
}

void UUWEInventoryStatics::SetInventoryAttributeTag(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, FGameplayTag Value, bool& bFound) {
}

void UUWEInventoryStatics::SetInventoryAttributeString(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, const FString& Value, bool& bFound) {
}

void UUWEInventoryStatics::SetInventoryAttributeInt(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, int32 Value, bool& bFound) {
}

void UUWEInventoryStatics::SetInventoryAttributeFloat(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, float Value, bool& bFound) {
}

void UUWEInventoryStatics::SetInventoryAttributeDataAsset(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, UDataAsset* DataAsset, bool& bFound) {
}

bool UUWEInventoryStatics::IsActorPickupable(AActor* PickingUpActor, AActor* Actor, FHitResult& HitResult) {
    return false;
}

UUWEItemType* UUWEInventoryStatics::GetItemTypeFromName(const FString& ItemName, const bool bPartial, bool& bOutFound) {
    return NULL;
}

UUWEItemType* UUWEInventoryStatics::GetItemTypeForPickupActor(const AActor* Actor) {
    return NULL;
}

FGameplayTag UUWEInventoryStatics::GetInventoryAttributeTag(TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound) {
    return FGameplayTag{};
}

FString UUWEInventoryStatics::GetInventoryAttributeString(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound) {
    return TEXT("");
}

int32 UUWEInventoryStatics::GetInventoryAttributeInt(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound) {
    return 0;
}

float UUWEInventoryStatics::GetInventoryAttributeFloat(const TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound) {
    return 0.0f;
}

UDataAsset* UUWEInventoryStatics::GetInventoryAttributeDataAsset(TSubclassOf<UDataAsset> DataAssetClass, TArray<FUWEInventoryItemAttribute>& Attributes, FGameplayTag AttributeName, bool& bFound) {
    return NULL;
}

TArray<FUWEInventoryItem> UUWEInventoryStatics::GetAllInventoryItemStacksOfType(UUWEItemType* ItemType, UUWEInventoryComponent* InventoryComponent) {
    return TArray<FUWEInventoryItem>();
}


