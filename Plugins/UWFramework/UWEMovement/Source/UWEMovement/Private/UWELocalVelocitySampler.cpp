#include "UWELocalVelocitySampler.h"

UUWELocalVelocitySampler::UUWELocalVelocitySampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UUWELocalVelocitySampler::GetTransformSpeed() const {
    return 0.0f;
}

FVector UUWELocalVelocitySampler::GetLocalVelocity() const {
    return FVector{};
}

FVector UUWELocalVelocitySampler::GetLocalAcceleration() const {
    return FVector{};
}

float UUWELocalVelocitySampler::GetForwardAcceleration() const {
    return 0.0f;
}


