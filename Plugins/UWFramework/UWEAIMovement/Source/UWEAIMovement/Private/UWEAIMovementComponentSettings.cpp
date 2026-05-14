#include "UWEAIMovementComponentSettings.h"

UUWEAIMovementComponentSettings::UUWEAIMovementComponentSettings() {
    this->CoreModuleSettings = NULL;
    this->StaticObstacleAvoidanceModuleSettings = NULL;
    this->OscillatoryMotionModuleSettings = NULL;
    this->SpiralHeightChangeModuleSettings = NULL;
    this->CircularMotionModuleSettings = NULL;
    this->SpeedAlterationModuleSettings = NULL;
    this->GroupingModuleSettings = NULL;
}

TArray<UUWEPrimaryDataAssetBase*> UUWEAIMovementComponentSettings::GetAllSettings() const {
    return TArray<UUWEPrimaryDataAssetBase*>();
}


