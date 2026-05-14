#include "TestAttributeComponent.h"

UTestAttributeComponent::UTestAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatAttribute = 100000.00f;
    this->ComponentOnlyFloatAttribute = -111111.11f;
}


