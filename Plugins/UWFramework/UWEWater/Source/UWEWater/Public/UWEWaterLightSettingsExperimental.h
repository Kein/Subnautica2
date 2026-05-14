#pragma once
#include "CoreMinimal.h"
#include "UWEWaterLightSettingsExperimental.generated.h"

USTRUCT(BlueprintType)
struct UWEWATER_API FUWEWaterLightSettingsExperimental {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BiomeFogReflectionStrength;
    
    FUWEWaterLightSettingsExperimental();
};

