#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "UWESplineWaterCurrentVisualizer.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEWATERCURRENTS_API UUWESplineWaterCurrentVisualizer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DrawDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineLengthStepBaseVelocityDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineRadiusStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SplineCircleStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor LineColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor ArrowColor;
    
    UUWESplineWaterCurrentVisualizer(const FObjectInitializer& ObjectInitializer);

};

