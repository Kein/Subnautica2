#include "UWETransformedShapeComponent.h"

UUWETransformedShapeComponent::UUWETransformedShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Static;
    this->bUseAsOccluder = true;
    this->bUseEditorCompositing = true;
}

FUWEShapeTransformed UUWETransformedShapeComponent::GetShape() {
    return FUWEShapeTransformed{};
}


