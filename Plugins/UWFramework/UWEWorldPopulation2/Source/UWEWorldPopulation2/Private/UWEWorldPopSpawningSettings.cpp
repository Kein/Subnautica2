#include "UWEWorldPopSpawningSettings.h"

UUWEWorldPopSpawningSettings::UUWEWorldPopSpawningSettings() {
    this->LandscapeLayerWeightThreshold = 0.33f;
    this->MaximumBoundsForGathering = 5000.00f;
    this->MaximumForSlowReduce = 100;
    this->MaxSpawnPointsWithoutUserConfirmation = 500;
    this->RegionDADirectory = TEXT("/Game/Data/WorldPopulation2/Regions");
    this->RegionConfigDADirectory = TEXT("/Game/Data/WorldPopulation2/Regions");
    this->ResourceDADirectory = TEXT("/Game/Data/WorldPopulation2/Resources");
}


