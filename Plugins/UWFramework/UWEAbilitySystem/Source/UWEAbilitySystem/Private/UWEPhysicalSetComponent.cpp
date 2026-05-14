#include "UWEPhysicalSetComponent.h"
#include "UWEPhysicalAttributeSet.h"

UUWEPhysicalSetComponent::UUWEPhysicalSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttributeSetClass = UUWEPhysicalAttributeSet::StaticClass();
}

float UUWEPhysicalSetComponent::GetBulk() const {
    return 0.0f;
}


