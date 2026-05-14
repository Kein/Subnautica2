#pragma once
#include "CoreMinimal.h"
#include "FUWEStimulusIntensity.h"
#include "FUWEStimulusType.h"
#include "UWEStimulusSource.h"
#include "UWEStimulusIntensityState.generated.h"

USTRUCT(BlueprintType)
struct FUWEStimulusIntensityState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEStimulusType Stimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEStimulusIntensity Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FUWEStimulusSource> StimulusSources;
    
    UWESTIMULUS_API FUWEStimulusIntensityState();
};

