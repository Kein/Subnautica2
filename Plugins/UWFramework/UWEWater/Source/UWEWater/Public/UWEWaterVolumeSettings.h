#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEWaterVolumeSettings.generated.h"

USTRUCT(BlueprintType)
struct FUWEWaterVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Albedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UWEWATER_API FUWEWaterVolumeSettings();
};

