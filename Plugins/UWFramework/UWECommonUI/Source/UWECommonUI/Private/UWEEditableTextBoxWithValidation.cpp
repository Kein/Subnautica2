#include "UWEEditableTextBoxWithValidation.h"

UUWEEditableTextBoxWithValidation::UUWEEditableTextBoxWithValidation() {
    this->MaxNumChars = 0;
}

bool UUWEEditableTextBoxWithValidation::ValidateText_Implementation(const FText& InText) {
    return false;
}


