#include "UWESplineComponent.h"
#include "UWESplineMetadata.h"

UUWESplineComponent::UUWESplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VertexDrawSize = 0;
    this->UWESplineMetadata = CreateDefaultSubobject<UUWESplineMetadata>(TEXT("UWESplineMetadata"));
}

void UUWESplineComponent::SetFadeExtentAtSplinePoint(const int32 PointIndex, const float Value) {
}

void UUWESplineComponent::SetAbsolutePositionAtSplinePoint(const int32 PointIndex, const float Value) {
}

FUWESplinePointData UUWESplineComponent::GetSplineDataAtPosition(const float InPosition) const {
    return FUWESplinePointData{};
}

float UUWESplineComponent::GetInputKeyAtPosition(const float InPosition) const {
    return 0.0f;
}

float UUWESplineComponent::GetFadeExtentAtSplinePoint(int32 PointIndex) const {
    return 0.0f;
}

float UUWESplineComponent::GetFadeExtentAtSplineInputKey(float InKey) const {
    return 0.0f;
}

void UUWESplineComponent::AddSplineDataAtPosition(const float InPosition, const FUWESplinePointData& InPointData) {
}


