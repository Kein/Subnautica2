#include "SN2AudioMixEffectsSubsystem.h"

USN2AudioMixEffectsSubsystem::USN2AudioMixEffectsSubsystem() {
    this->DefaultBaseMix = NULL;
    this->LoadingScreenMix = NULL;
    this->UserMix = NULL;
    this->OverallControlBus = NULL;
    this->MusicControlBus = NULL;
    this->SoundFXControlBus = NULL;
    this->DialogueControlBus = NULL;
    this->CinematicsControlBus = NULL;
}


