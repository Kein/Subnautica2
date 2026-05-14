#include "UWEBaseModuleMesh.h"

FUWEBaseModuleMesh::FUWEBaseModuleMesh() {
    this->Mesh = NULL;
    this->IgnoreForAutoRuleGeneration = false;
    this->ExteriorMesh = false;
    this->ExcludeFromGhost = false;
}

