#include "SN2BuilderBlueprintFunctionLibrary.h"

USN2BuilderBlueprintFunctionLibrary::USN2BuilderBlueprintFunctionLibrary() {
}

bool USN2BuilderBlueprintFunctionLibrary::TryGetActorConstructableParams(FSN2ConstructableParams& ConstructableParams, AActor* Actor) {
    return false;
}

void USN2BuilderBlueprintFunctionLibrary::RefundBase(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId) {
}

void USN2BuilderBlueprintFunctionLibrary::PingBase(ASN2PlayerCharacter* RefundingPlayer, FGuid BaseGUID, uint8 StructureId) {
}


