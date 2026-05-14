#include "SN2BuilderToolComponent.h"

USN2BuilderToolComponent::USN2BuilderToolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

void USN2BuilderToolComponent::ServerRefundBase_Implementation(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId) {
}

void USN2BuilderToolComponent::ServerPingBase_Implementation(ASN2PlayerCharacter* Player, FGuid BaseGUID, uint8 StructureId) {
}


