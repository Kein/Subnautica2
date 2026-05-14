#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusApplicationRequest.generated.h"

class AActor;
class UUWEStimulusSensor;

USTRUCT()
struct FUWEStimulusApplicationRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UUWEStimulusSensor> Sensor;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Instigator;
    
    UWESTIMULUSSYSTEM_API FUWEStimulusApplicationRequest();
};

