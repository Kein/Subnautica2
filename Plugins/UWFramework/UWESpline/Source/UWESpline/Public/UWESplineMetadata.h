#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "UWESplineMetadata.generated.h"

UCLASS()
class UWESPLINE_API UUWESplineMetadata : public USplineMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat AbsolutePosition;
    
    UPROPERTY(EditAnywhere)
    FInterpCurveFloat FadeExtent;
    
    UUWESplineMetadata();

};

