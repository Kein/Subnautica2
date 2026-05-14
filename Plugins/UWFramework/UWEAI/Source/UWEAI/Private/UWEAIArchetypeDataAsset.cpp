#include "UWEAIArchetypeDataAsset.h"

UUWEAIArchetypeDataAsset::UUWEAIArchetypeDataAsset() {
    this->Brainless = false;
    this->DisableCollisionAtProximityToPlayerOnClient = true;
    this->DisableCollisionDistance = 1000.00f;
    this->DisableMeshCollisionAtProximityToPlayerOnAuthority = false;
    this->DisableMeshCollisionDistance = 1000.00f;
    this->QueryBoxHalfExtent = 3000.00f;
    this->FindSmartObjectsTime = 5.00f;
    this->FindPerceivedSmartObjectsOnly = false;
    this->DominantSense = NULL;
    this->BroadcastPerceivedTargetToGroup = false;
    this->BroadcastPerceivedTargetToLeader = false;
}


