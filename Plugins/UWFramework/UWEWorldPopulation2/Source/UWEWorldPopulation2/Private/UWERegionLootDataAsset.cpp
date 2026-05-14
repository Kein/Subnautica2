#include "UWERegionLootDataAsset.h"

UUWERegionLootDataAsset::UUWERegionLootDataAsset() {
}

TSoftClassPtr<AActor> UUWERegionLootDataAsset::PickWeightedLootForRegion(FGameplayTag RegionTag) {
    return NULL;
}

FUWELootEntryList UUWERegionLootDataAsset::GetLootEntriesForRegion(FGameplayTag RegionTag) {
    return FUWELootEntryList{};
}


