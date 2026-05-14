#include "SN2DeconstructableComponent.h"

USN2DeconstructableComponent::USN2DeconstructableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveHandle = NULL;
}

USN2DeconstructableComponent* USN2DeconstructableComponent::TryFindDeconstructableComponent(const AActor* Actor) {
    return NULL;
}

void USN2DeconstructableComponent::Deconstruct(ASN2BuilderTool* BuilderTool, FGuid TargetGUID) {
}


