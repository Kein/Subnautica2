#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "UWESplineCurveDefaults.h"
#include "UWESplinePointData.h"
#include "UWESplineSegment.h"
#include "UWESplineComponent.generated.h"

class UUWESplineMetadata;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESPLINE_API UUWESplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FUWESplineSegment> SplineSegments;
    
    UPROPERTY(EditAnywhere)
    int32 VertexDrawSize;
    
    UPROPERTY(EditDefaultsOnly)
    FUWESplineCurveDefaults CameraSplineDefaults;
    
    UPROPERTY(Instanced)
    UUWESplineMetadata* UWESplineMetadata;
    
    UUWESplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFadeExtentAtSplinePoint(const int32 PointIndex, const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAbsolutePositionAtSplinePoint(const int32 PointIndex, const float Value);
    
    UFUNCTION(BlueprintPure)
    FUWESplinePointData GetSplineDataAtPosition(const float InPosition) const;
    
    UFUNCTION(BlueprintPure)
    float GetInputKeyAtPosition(const float InPosition) const;
    
    UFUNCTION(BlueprintPure)
    float GetFadeExtentAtSplinePoint(int32 PointIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetFadeExtentAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void AddSplineDataAtPosition(const float InPosition, const FUWESplinePointData& InPointData);
    
};

