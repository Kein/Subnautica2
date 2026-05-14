#pragma once
#include "CoreMinimal.h"
#include "UWEStimulusReceiverData.generated.h"

USTRUCT(BlueprintType)
struct FUWEStimulusReceiverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StimulusSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StimulusFadeTimeSeconds;
    
    UWESTIMULUS_API FUWEStimulusReceiverData();
};

