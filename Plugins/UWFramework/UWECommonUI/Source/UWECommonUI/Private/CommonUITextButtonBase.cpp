#include "CommonUITextButtonBase.h"

UCommonUITextButtonBase::UCommonUITextButtonBase() {
    this->Text = FText::FromString(TEXT("{Text}"));
    this->TextLabel = NULL;
}

void UCommonUITextButtonBase::SetText(FText InText) {
}


