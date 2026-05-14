#include "UWESimpleGridSlot.h"

UUWESimpleGridSlot::UUWESimpleGridSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UUWESimpleGridSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UUWESimpleGridSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

TEnumAsByte<EVerticalAlignment> UUWESimpleGridSlot::GetVerticalAlignment() const {
    return VAlign_Fill;
}

TEnumAsByte<EHorizontalAlignment> UUWESimpleGridSlot::GetHorizontalAlignment() const {
    return HAlign_Fill;
}


