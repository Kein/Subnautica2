#include "UWEItemType.h"

UUWEItemType::UUWEItemType() {
    this->DefaultAttachment = NULL;
    this->PickupDestination = EPickupDestination::Inventory;
    this->bReequipSameTypeOnRemove = true;
    this->bEnergyTool = false;
    this->bShowNameWhenHovered = true;
    this->bUseFromInventory = false;
    this->bInvisibleInFirstPerson = false;
    this->bTool = false;
    this->bIsTwoHanded = false;
    this->bHideTunableDataInConsumableInfo = false;
    this->bNonSingleton = false;
}

void UUWEItemType::PreloadItemAnimBlueprintClass() const {
}

bool UUWEItemType::IsEquippment() const {
    return false;
}

bool UUWEItemType::IsEquippable() const {
    return false;
}

void UUWEItemType::GetTunableData(FGameplayTag Tag, float& Value, bool& bFound) const {
}

UTexture2D* UUWEItemType::GetThumbnailFromAttributeMap(TMap<FGameplayTag, FString> Map) {
    return NULL;
}

FUWEFabricationPreviewMeshData UUWEItemType::GetPreviewMeshData() const {
    return FUWEFabricationPreviewMeshData{};
}

UClass* UUWEItemType::GetItemAnimEquippedAnimBlueprintClass() const {
    return NULL;
}

UClass* UUWEItemType::GetHeldActorClassLoaded() const {
    return NULL;
}

TMap<FGameplayTag, FString> UUWEItemType::GetDefaultCapturedAttributes() {
    return TMap<FGameplayTag, FString>();
}


