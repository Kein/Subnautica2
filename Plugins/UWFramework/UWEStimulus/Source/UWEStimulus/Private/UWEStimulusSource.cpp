#include "UWEStimulusSource.h"

FUWEStimulusSource::FUWEStimulusSource() {
    this->Intensity = FUWEStimulusIntensity::None;
    this->IsActive = false;
    this->SourceActor = NULL;
    this->LastSensedIntensity = FUWEStimulusIntensity::None;
    this->TimeSinceFirstSensed = 0.00f;
    this->TimeSinceLastSensed = 0.00f;
    this->SourceStimulusEmitterComponent = NULL;
    this->IsSourceSensor = false;
}

