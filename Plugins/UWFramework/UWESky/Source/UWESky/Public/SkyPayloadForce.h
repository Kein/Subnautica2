#pragma once
#include "CoreMinimal.h"
#include "SkyPayloadForce.generated.h"

class UDaySequenceCollectionAsset;

USTRUCT()
struct UWESKY_API FSkyPayloadForce {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDaySequenceCollectionAsset* SkySequence;
    
    FSkyPayloadForce();
};

