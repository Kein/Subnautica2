#include "UWEBaseTool.h"

AUWEBaseTool::AUWEBaseTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

void AUWEBaseTool::SetAmmoCount(float InCurrentAmmo, float InMaxAmmo) {
}

bool AUWEBaseTool::HasAmmo() const {
    return false;
}

FGameplayTagContainer AUWEBaseTool::GetRequiredAmmoTags() const {
    return FGameplayTagContainer{};
}

ACharacter* AUWEBaseTool::GetHoldingPlayer() {
    return NULL;
}

UUWEItemType* AUWEBaseTool::GetAmmoType() const {
    return NULL;
}

float AUWEBaseTool::GetAmmoPercent() const {
    return 0.0f;
}


