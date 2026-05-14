#include "GPPBaseScreen.h"

UGPPBaseScreen::UGPPBaseScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->bUpdateOnPreConstruct = true;
    this->UIMode = EGPPUIMode::None;
}

void UGPPBaseScreen::UpdateWidget() {
}


EGPPUIMode UGPPBaseScreen::GetUIMode() const {
    return EGPPUIMode::None;
}


