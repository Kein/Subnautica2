#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusUpdatingData.generated.h"

USTRUCT()
struct FUWEStimulusUpdatingData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float TimeSinceLastUpdate;
    
    UPROPERTY(Transient)
    bool IsInRangeOfPlayer;
    
    UPROPERTY(Transient)
    bool IsEnabled;
    
    UWESTIMULUS_API FUWEStimulusUpdatingData();
};

