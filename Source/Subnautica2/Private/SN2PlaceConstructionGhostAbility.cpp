#include "SN2PlaceConstructionGhostAbility.h"

USN2PlaceConstructionGhostAbility::USN2PlaceConstructionGhostAbility() {
    this->PlacementGhost = NULL;
    this->UpdateTask = NULL;
    this->ActionData = NULL;
}

bool USN2PlaceConstructionGhostAbility::TrySpawnConstructionGhost(FSN2GhostPlacement GhostPlacement, FGuid TargetGUID) {
    return false;
}

void USN2PlaceConstructionGhostAbility::SpawnPlacementGhost(USN2BuilderConstructActionData* ConstructActionData) {
}

void USN2PlaceConstructionGhostAbility::ServerSpawnConstructionGhost_Implementation(FSN2BuilderGhostParams GhostParams, FSN2ConstructableParams ConstructableParams, FSN2GhostPlacement Placement, FGuid GhostGUID) {
}


