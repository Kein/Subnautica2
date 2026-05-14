#include "SnappingSettings.h"

FSnappingSettings::FSnappingSettings() {
    this->DefaultSnapping = EBuilderSnapping::Freeform;
    this->DefaultLocationSnapSize = 0.00f;
    this->DefaultUserRotationIncrement = 0.00f;
}

