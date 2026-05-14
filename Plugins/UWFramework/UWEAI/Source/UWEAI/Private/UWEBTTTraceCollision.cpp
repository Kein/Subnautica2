#include "UWEBTTTraceCollision.h"

UUWEBTTTraceCollision::UUWEBTTTraceCollision() {
    this->NodeName = TEXT("UWE Trace Collision");
    this->TraceChannel = ECC_Visibility;
    this->TraceLength = 1000.00f;
    this->PitchConeMax = 0.00f;
    this->YawConeMax = 0.00f;
    this->PitchConeStep = 0.00f;
    this->YawConeStep = 0.00f;
    this->OnlyCrawlingSurfaces = false;
    this->SupportedCrawlingObjectTypes = 255;
}


