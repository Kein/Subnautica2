#include "UWEWaterLightSettings.h"

FUWEWaterLightSettings::FUWEWaterLightSettings() {
    this->BiomeExtinctionScaleDirectionalLight = 0.00f;
    this->BiomeExtinctionScaleSkylight = 0.00f;
    this->DirectionalLightAngleBias = 0.00f;
    this->StartDepthBiasDirectionalLight = 0.00f;
    this->StartDepthBiasSkylight = 0.00f;
    this->BiomeNeutralStrengthNear = 0.00f;
    this->BiomeNeutralStrengthFar = 0.00f;
    this->WaterFogDistance = 0.00f;
    this->WaterFogThickness = 0.00f;
    this->WaterFogBaseThickness = 0.00f;
    this->BiomeBlendType = EBiomeBlendType::XYZ;
    this->BiomeBlendDistance = 0.00f;
    this->WaterFogOpacityWeight = 0.00f;
}

