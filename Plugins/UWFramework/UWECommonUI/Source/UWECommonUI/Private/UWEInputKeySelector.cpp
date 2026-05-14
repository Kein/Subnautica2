#include "UWEInputKeySelector.h"
#include "Templates/SubclassOf.h"

UUWEInputKeySelector::UUWEInputKeySelector() {
    this->TextStyle = NULL;
    this->KeySelectionText = FText::FromString(TEXT("..."));
    this->NoKeySpecifiedText = FText::FromString(TEXT("Empty"));
    this->bAllowModifierKeys = true;
    this->bAllowGamepadKeys = false;
    this->EscapeKeys.AddDefaulted(1);
}

void UUWEInputKeySelector::SetTextBlockVisibility(const ESlateVisibility InVisibility) {
}

void UUWEInputKeySelector::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}

void UUWEInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

void UUWEInputKeySelector::SetNoKeySpecifiedText(FText InNoKeySpecifiedText) {
}

void UUWEInputKeySelector::SetKeySelectionText(FText InKeySelectionText) {
}

void UUWEInputKeySelector::SetIconSize(FVector2D NewSize) {
}

void UUWEInputKeySelector::SetEscapeKeys(const TArray<FKey>& InKeys) {
}

void UUWEInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
}

void UUWEInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
}

bool UUWEInputKeySelector::GetIsSelectingKey() const {
    return false;
}


