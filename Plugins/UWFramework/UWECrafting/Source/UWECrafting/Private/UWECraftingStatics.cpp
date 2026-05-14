#include "UWECraftingStatics.h"

UUWECraftingStatics::UUWECraftingStatics() {
}

bool UUWECraftingStatics::TargetSatisfiesRequirements(UUWEPrimaryDataAssetBase* Recipe, const TArray<FUWERecipeUnlockRules>& UpdatedUnlockingRequirements, APlayerState* PlayerState) {
    return false;
}

bool UUWECraftingStatics::ShouldIgnoreUnlockRequirements(const UObject* WorldContextObject) {
    return false;
}

bool UUWECraftingStatics::ItemRecipeIsUnlocked(UUWEItemType* ItemType, APlayerState* PlayerState) {
    return false;
}

bool UUWECraftingStatics::IsRecipeUnlockedForPlayer(UUWECraftingRecipe* Recipe, APlayerState* PlayerState) {
    return false;
}

FGameplayTag UUWECraftingStatics::GetTagAtDepth(const FGameplayTag& Tag, const int32 Depth) {
    return FGameplayTag{};
}

FUWERecipeUnlockRuleEntry UUWECraftingStatics::ExtractRule(const FUWERecipeUnlockRuleEntry& InEntry, UUWEPrimaryDataAssetBase* ParentAsset) {
    return FUWERecipeUnlockRuleEntry{};
}


