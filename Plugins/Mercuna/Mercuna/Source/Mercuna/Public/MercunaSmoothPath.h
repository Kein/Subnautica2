#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "PoseSearch/PoseSearchTrajectoryTypes.h"
#include "MercunaPath.h"
#include "MercunaSmoothPath.generated.h"

UCLASS()
class MERCUNA_API UMercunaSmoothPath : public UMercunaPath {
    GENERATED_BODY()
public:
    UMercunaSmoothPath();

    UFUNCTION(BlueprintPure)
    FVector GetTangent(const float Length) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSplinePoint> GetSplinePoints(const FTransform& RelativeTo) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPosition(const float Length) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPoseTrajectory(FPoseSearchQueryTrajectory& TrajectorySampleRange, float LookAhead, int32 SampleRate, bool ReturnAbsoluteTimes) const;
    
};

