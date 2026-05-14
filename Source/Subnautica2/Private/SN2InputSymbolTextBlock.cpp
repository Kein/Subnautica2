#include "SN2InputSymbolTextBlock.h"

USN2InputSymbolTextBlock::USN2InputSymbolTextBlock() {
    this->WrapBox = NULL;
    this->TextStyle = NULL;
    this->bHideWithMissingInputBinding = false;
}

void USN2InputSymbolTextBlock::SetText(const FString& Text) {
}

void USN2InputSymbolTextBlock::OnInputMethodChanged(ECommonInputType CurrentInputType) {
}

void USN2InputSymbolTextBlock::OnControlMappingsRebuilt() {
}


