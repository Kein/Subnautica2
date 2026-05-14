#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FUWEStimulusIntensity.h"
#include "UWEStimulusSource.generated.h"

class AActor;
class UUWEStimulusEmitterComponent;

USTRUCT(BlueprintType)
struct FUWEStimulusSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEStimulusIntensity Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LastSensedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUWEStimulusIntensity LastSensedIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeSinceFirstSensed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeSinceLastSensed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUWEStimulusEmitterComponent* SourceStimulusEmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSourceSensor;
    
    UWESTIMULUS_API FUWEStimulusSource();
};

