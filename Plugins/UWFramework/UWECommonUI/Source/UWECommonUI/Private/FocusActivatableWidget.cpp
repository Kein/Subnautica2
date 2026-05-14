#include "FocusActivatableWidget.h"

UFocusActivatableWidget::UFocusActivatableWidget() {
    this->Context = NULL;
    this->InputMode = EUWEInputMode::All;
    this->CaptureMode = EMouseCaptureMode::NoCapture;
    this->HideCursor = false;
}



