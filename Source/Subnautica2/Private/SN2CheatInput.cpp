#include "SN2CheatInput.h"
#include "EUWEInputMode.h"

USN2CheatInput::USN2CheatInput() {
    this->InputMode = EUWEInputMode::Menu;
}

void USN2CheatInput::HandleAutoComplete() {
}

FString USN2CheatInput::GetTypedString() {
    return TEXT("");
}

FString USN2CheatInput::GetAutoCompleteString() {
    return TEXT("");
}

FString USN2CheatInput::GetAutoCompleteDescription() {
    return TEXT("");
}


