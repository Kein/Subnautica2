#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESplineWorldForceVisualizer.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWORLDFORCES_API UUWESplineWorldForceVisualizer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DrawDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineLengthStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineRadiusStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineCircleStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForceScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor Color;
    
    UUWESplineWorldForceVisualizer(const FObjectInitializer& ObjectInitializer);

};

