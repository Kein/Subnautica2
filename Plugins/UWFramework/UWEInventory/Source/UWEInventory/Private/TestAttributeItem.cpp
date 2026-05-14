#include "TestAttributeItem.h"
#include "TestAttributeComponent.h"

ATestAttributeItem::ATestAttributeItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatAttribute = 1.23f;
    this->DoubleAttribute = 1.23f;
    this->IntAttribute = 1234;
    this->BoolAttribute = false;
    this->StringAttribute = TEXT("1234");
    this->IntArrayAttribute.AddDefaulted(4);
    this->TestAttributeComponent = CreateDefaultSubobject<UTestAttributeComponent>(TEXT("TestAttributeComponent"));
}


