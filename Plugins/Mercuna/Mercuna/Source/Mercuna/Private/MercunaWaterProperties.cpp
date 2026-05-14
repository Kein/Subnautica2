#include "MercunaWaterProperties.h"

FMercunaWaterProperties::FMercunaWaterProperties() {
    this->MinimumShallowWaterDepth = 0.00f;
    this->MinimumDeepWaterDepth = 0.00f;
    this->DeepWaterMode = EMercunaDeepWaterMode::Unnavigable;
    this->ShallowWaterCostMultiplier = 0.00f;
    this->DeepWaterCostMultiplier = 0.00f;
}

