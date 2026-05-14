#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UWECausticsSettings.h"
#include "EBiomeBlendType.h"
#include "UWEWaterLightSettingsAdvanced.h"
#include "UWEWaterLightSettingsExperimental.h"
#include "UWEWaterLightSettings.generated.h"

USTRUCT(BlueprintType)
struct UWEWATER_API FUWEWaterLightSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeExtinction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeExtinctionSkylight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeExtinctionScaleDirectionalLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeExtinctionScaleSkylight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DirectionalLightAngleBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartDepthBiasDirectionalLight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartDepthBiasSkylight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeNeutralColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeNeutralStrengthNear;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeNeutralStrengthFar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeAlbedo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaterFogDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaterFogThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WaterFogBaseThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBiomeBlendType BiomeBlendType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeBlendDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D BiomeBlendDistanceXYAndZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float WaterFogOpacityWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWECausticsSettings CausticsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEWaterLightSettingsAdvanced Advanced;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUWEWaterLightSettingsExperimental Experimental;
    
    FUWEWaterLightSettings();
};

