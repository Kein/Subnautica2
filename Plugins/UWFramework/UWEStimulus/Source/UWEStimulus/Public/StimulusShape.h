#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StimulusShape.generated.h"

USTRUCT(BlueprintType)
struct FStimulusShape {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Offset;
    
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(EditAnywhere)
    float HalfAngle;
    
    UWESTIMULUS_API FStimulusShape();
};

