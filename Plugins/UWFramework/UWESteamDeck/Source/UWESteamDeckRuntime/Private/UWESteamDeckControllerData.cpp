#include "UWESteamDeckControllerData.h"
#include "CommonInputTypeEnum.h"

UUWESteamDeckControllerData::UUWESteamDeckControllerData() {
    this->InputType = ECommonInputType::Gamepad;
    this->GamepadName = TEXT("SteamDeck");
    this->GamepadDisplayName = FText::FromString(TEXT("SteamDeck"));
    this->GamepadCategory = FText::FromString(TEXT("SteamDeck"));
    this->GamepadPlatformName = FText::FromString(TEXT("SteamDeck"));
}

FName UUWESteamDeckControllerData::GetSteamDeckControllerName() {
    return NAME_None;
}


