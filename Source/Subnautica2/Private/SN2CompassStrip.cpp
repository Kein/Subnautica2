#include "SN2CompassStrip.h"

USN2CompassStrip::USN2CompassStrip() : UUserWidget(FObjectInitializer::Get()) {
    this->MajorStyle = NULL;
    this->MinorStyle = NULL;
    this->NumberStyle = NULL;
    this->LineSpacing = 3.00f;
    this->Range = 120.00f;
    this->Heading = 0.00f;
}


