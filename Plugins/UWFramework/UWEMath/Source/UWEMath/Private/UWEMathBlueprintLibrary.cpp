#include "UWEMathBlueprintLibrary.h"

UUWEMathBlueprintLibrary::UUWEMathBlueprintLibrary() {
}

FRotator UUWEMathBlueprintLibrary::NormalizeRotator(const FRotator& Rotator) {
    return FRotator{};
}

FVector UUWEMathBlueprintLibrary::MoveVectorTowards(const FVector& Current, const FVector& Target, float Amount) {
    return FVector{};
}

FRotator UUWEMathBlueprintLibrary::MoveRotatorTowards(const FRotator& Current, const FRotator& Target, const FVector& Amount) {
    return FRotator{};
}

float UUWEMathBlueprintLibrary::MoveFloatTowards(const float Current, const float Target, float Amount) {
    return 0.0f;
}

bool UUWEMathBlueprintLibrary::IsNotEqual(const float A, const float B) {
    return false;
}

bool UUWEMathBlueprintLibrary::IsLessEqual(const float A, const float B) {
    return false;
}

bool UUWEMathBlueprintLibrary::IsLess(const float A, const float B) {
    return false;
}

bool UUWEMathBlueprintLibrary::IsGreaterEqual(const float A, const float B) {
    return false;
}

bool UUWEMathBlueprintLibrary::IsGreater(const float A, const float B) {
    return false;
}

bool UUWEMathBlueprintLibrary::IsEqual(const float A, const float B) {
    return false;
}

FVector UUWEMathBlueprintLibrary::InterpolateVectorExponential(const FVector& Current, const FVector& Target, float DeltaTime, float SmoothTime) {
    return FVector{};
}

FTransform UUWEMathBlueprintLibrary::InterpolateTransform(const FTransform& Current, const FTransform& Target, float alpha) {
    return FTransform{};
}

FRotator UUWEMathBlueprintLibrary::InterpolateRotatorExponential(const FRotator& Current, const FRotator& Target, float DeltaTime, float SmoothTime) {
    return FRotator{};
}

FQuat UUWEMathBlueprintLibrary::InterpolateQuaternionExponential(const FQuat& Current, const FQuat& Target, float DeltaTime, float SmoothTime) {
    return FQuat{};
}

float UUWEMathBlueprintLibrary::InterpolateFloatExponential(float Current, float Target, float DeltaTime, float SmoothTime) {
    return 0.0f;
}

float UUWEMathBlueprintLibrary::GetAngleDifferenceDegrees(FTransform A, FTransform B) {
    return 0.0f;
}

float UUWEMathBlueprintLibrary::EulerLength(const FRotator& Rotator) {
    return 0.0f;
}


