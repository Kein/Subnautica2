#include "MercunaNavOctreeVolume.h"

AMercunaNavOctreeVolume::AMercunaNavOctreeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LOD = EMercunaLevelOfDetail::Full;
    this->FullDetailBuild = true;
}

void AMercunaNavOctreeVolume::RemoveFromOctree() {
}

void AMercunaNavOctreeVolume::AddToOctree(AMercunaNavOctree* NewNavOctree) {
}


