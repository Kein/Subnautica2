#pragma once
#include "CoreMinimal.h"
#include "FUWEStimulusIntensity.h"
#include "UWEStimulusEmitterData.generated.h"

USTRUCT(BlueprintType)
struct FUWEStimulusEmitterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StimulusEmitted;
    
    UPROPERTY(EditAnywhere)
    FUWEStimulusIntensity Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnabled;
    
    UPROPERTY(Transient)
    bool IsSourceSensor;
    
    UWESTIMULUS_API FUWEStimulusEmitterData();
};

