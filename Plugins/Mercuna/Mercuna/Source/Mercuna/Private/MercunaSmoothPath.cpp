#include "MercunaSmoothPath.h"

UMercunaSmoothPath::UMercunaSmoothPath() {
}

FVector UMercunaSmoothPath::GetTangent(const float Length) const {
    return FVector{};
}

TArray<FSplinePoint> UMercunaSmoothPath::GetSplinePoints(const FTransform& RelativeTo) const {
    return TArray<FSplinePoint>();
}

FVector UMercunaSmoothPath::GetPosition(const float Length) const {
    return FVector{};
}

bool UMercunaSmoothPath::GetPoseTrajectory(FPoseSearchQueryTrajectory& TrajectorySampleRange, float LookAhead, int32 SampleRate, bool ReturnAbsoluteTimes) const {
    return false;
}


