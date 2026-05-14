#pragma once
#include "CoreMinimal.h"
#include "SkyPayloadTransition.generated.h"

class UDaySequenceCollectionAsset;

USTRUCT()
struct UWESKY_API FSkyPayloadTransition {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDaySequenceCollectionAsset* SkySequence;
    
    UPROPERTY()
    float TransitionLength;
    
    FSkyPayloadTransition();
};

