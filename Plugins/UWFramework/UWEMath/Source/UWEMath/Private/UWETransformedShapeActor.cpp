#include "UWETransformedShapeActor.h"
#include "UWETransformedShapeComponent.h"

AUWETransformedShapeActor::AUWETransformedShapeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUWETransformedShapeComponent>(TEXT("TransformedShapeComponent"));
    this->TransformedShapeComponent = (UUWETransformedShapeComponent*)RootComponent;
}

FUWEShapeTransformed AUWETransformedShapeActor::GetShape() {
    return FUWEShapeTransformed{};
}


