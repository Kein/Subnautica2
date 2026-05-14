#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWaterLightSettingsAdvanced.generated.h"

USTRUCT(BlueprintType)
struct UWEWATER_API FUWEWaterLightSettingsAdvanced {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeAlbedoPower;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeAlbedoTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BiomeEmissive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeAlbedoDesaturation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeAlbedoBrightness;
    
    FUWEWaterLightSettingsAdvanced();
};

