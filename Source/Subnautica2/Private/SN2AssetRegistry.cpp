#include "SN2AssetRegistry.h"

USN2AssetRegistry::USN2AssetRegistry() {
}

TArray<UUWEDialogueNode*> USN2AssetRegistry::SN2GetAllDialogues() {
    return TArray<UUWEDialogueNode*>();
}

void USN2AssetRegistry::RebuildAssetRegistryCachedData() {
}

TArray<UUWEStoryGoal*> USN2AssetRegistry::GetAllStoryGoals() {
    return TArray<UUWEStoryGoal*>();
}

TArray<UUWEScanData*> USN2AssetRegistry::GetAllScanDatas() {
    return TArray<UUWEScanData*>();
}

TArray<UUWEItemType*> USN2AssetRegistry::GetAllItemTypes() {
    return TArray<UUWEItemType*>();
}

TArray<UUWEDatabankEntry*> USN2AssetRegistry::GetAllDatabankEntries() {
    return TArray<UUWEDatabankEntry*>();
}

TArray<UUWECraftingRecipe*> USN2AssetRegistry::GetAllCraftingRecipes() {
    return TArray<UUWECraftingRecipe*>();
}

TArray<USN2BuilderActionData*> USN2AssetRegistry::GetAllBuilderActions() {
    return TArray<USN2BuilderActionData*>();
}

UUWEScanData* USN2AssetRegistry::FindScanDataByTag(FGameplayTag FilterTag) {
    return NULL;
}


