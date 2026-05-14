#include "UWEAIMovementData.h"

FUWEAIMovementData::FUWEAIMovementData() {
    this->HabitationVolumesDiscoveryRadius = 0.00f;
    this->AllowEmptyHabitationAreas = false;
    this->PersonalHabitationStayInVolumeType = EVolumeType::EVolumeType_None;
    this->BaseSettings = NULL;
}

