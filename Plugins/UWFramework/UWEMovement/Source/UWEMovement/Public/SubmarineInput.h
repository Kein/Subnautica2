#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubmarineInput.generated.h"

USTRUCT(BlueprintType)
struct FSubmarineInput {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FVector Acceleration;
    
    UPROPERTY(VisibleAnywhere)
    FVector AngularAcceleration;
    
    UPROPERTY()
    double ApplicationTime;
    
    UWEMOVEMENT_API FSubmarineInput();
};

