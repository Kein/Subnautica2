#include "SN2BlightCore.h"
#include "EBlightNodeState.h"

ASN2BlightCore::ASN2BlightCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NodeState = EBlightNodeState::Dormant;
}

void ASN2BlightCore::OnNodeRemediatedChanged(USN2BlightNodeDataAsset* RemediatedDataAsset, bool NewRemediatedState) {
}

int32 ASN2BlightCore::GetNumUnremediatedAssociatedNodes() {
    return 0;
}

int32 ASN2BlightCore::GetNumAssociatedNodes() const {
    return 0;
}


