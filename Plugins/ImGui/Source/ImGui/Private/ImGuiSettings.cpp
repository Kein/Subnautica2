#include "ImGuiSettings.h"

UImGuiSettings::UImGuiSettings() {
    this->bShareKeyboardInput = false;
    this->bShareGamepadInput = false;
    this->bShareMouseInput = true;
    this->bUseSoftwareCursor = false;
    this->InputProcessorPriority = 2;
    this->ImGuiFont = EImGuiFont::Roboto;
}


