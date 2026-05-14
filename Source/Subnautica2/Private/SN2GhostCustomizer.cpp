#include "SN2GhostCustomizer.h"

ASN2GhostCustomizer::ASN2GhostCustomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideGhost = true;
    this->IsPlacementLegal = true;
}



