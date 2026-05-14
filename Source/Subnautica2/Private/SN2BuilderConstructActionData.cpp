#include "SN2BuilderConstructActionData.h"

USN2BuilderConstructActionData::USN2BuilderConstructActionData() {
    this->bShowRecipeCategory = false;
    this->RenderGhostOverlaySeparately = false;
    this->UseGhostCameraOffsetOverride = false;
    this->GhostCameraOffsetOverride = 5.00f;
    this->Recipe = NULL;
    this->bDeconstructOnly = false;
    this->bSpawnAsDynamicItem = false;
}

void USN2BuilderConstructActionData::PreloadAssets() {
}

TArray<FCraftingRecipeRequirement> USN2BuilderConstructActionData::GetRequiredResources() const {
    return TArray<FCraftingRecipeRequirement>();
}

TSoftClassPtr<AActor> USN2BuilderConstructActionData::GetDefaultActorClassToPlace() const {
    return NULL;
}


