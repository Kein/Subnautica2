#include "UWEStimulusEmitterData.h"

FUWEStimulusEmitterData::FUWEStimulusEmitterData() {
    this->StimulusEmitted = 0;
    this->Intensity = FUWEStimulusIntensity::None;
    this->IsEnabled = false;
    this->IsSourceSensor = false;
}

