#include "UWEAttributeSetComponent.h"

UUWEAttributeSetComponent::UUWEAttributeSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = NULL;
    this->AbilitySystemComponent = NULL;
    this->SaveHandle = NULL;
}


