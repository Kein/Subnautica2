#include "SN2PingScreen.h"

USN2PingScreen::USN2PingScreen() {
    this->EdgePadding = 64.00f;
    this->HideMarkerAngle = 90.00f;
    this->TextThresholdAngle = 10.00f;
    this->TransitionRangeAngle = 10.00f;
    this->FadeEndDistance = 200.00f;
    this->FadeStartDistance = 700.00f;
    this->DefaultPlayerNameText = TEXT("Riley Robinson");
    this->PingMarkerClass = NULL;
    this->CanvasPanel = NULL;
    this->PlayerController = NULL;
    this->PlayerState = NULL;
    this->PingSystemComponent = NULL;
    this->PingSystemVM = NULL;
}

void USN2PingScreen::OnPlayerStateSet() {
}

void USN2PingScreen::OnGameCaptureDisplayModeChanged() {
}


