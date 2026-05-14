#pragma once
#include "CoreMinimal.h"
#include "CompassStripTextMarker.generated.h"

USTRUCT(BlueprintType)
struct FCompassStripTextMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(Transient)
    float MeasuredWidth;
    
    SUBNAUTICA2_API FCompassStripTextMarker();
};

