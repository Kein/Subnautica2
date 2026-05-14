#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UWEMathBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UWEMATH_API UUWEMathBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUWEMathBlueprintLibrary();

    UFUNCTION(BlueprintPure)
    static FRotator NormalizeRotator(const FRotator& Rotator);
    
    UFUNCTION(BlueprintPure)
    static FVector MoveVectorTowards(const FVector& Current, const FVector& Target, float Amount);
    
    UFUNCTION(BlueprintPure)
    static FRotator MoveRotatorTowards(const FRotator& Current, const FRotator& Target, const FVector& Amount);
    
    UFUNCTION(BlueprintPure)
    static float MoveFloatTowards(const float Current, const float Target, float Amount);
    
    UFUNCTION(BlueprintPure)
    static bool IsNotEqual(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool IsLessEqual(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool IsLess(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool IsGreaterEqual(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool IsGreater(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool IsEqual(const float A, const float B);
    
    UFUNCTION(BlueprintPure)
    static FVector InterpolateVectorExponential(const FVector& Current, const FVector& Target, float DeltaTime, float SmoothTime);
    
    UFUNCTION(BlueprintPure)
    static FTransform InterpolateTransform(const FTransform& Current, const FTransform& Target, float alpha);
    
    UFUNCTION(BlueprintPure)
    static FRotator InterpolateRotatorExponential(const FRotator& Current, const FRotator& Target, float DeltaTime, float SmoothTime);
    
    UFUNCTION(BlueprintPure)
    static FQuat InterpolateQuaternionExponential(const FQuat& Current, const FQuat& Target, float DeltaTime, float SmoothTime);
    
    UFUNCTION(BlueprintPure)
    static float InterpolateFloatExponential(float Current, float Target, float DeltaTime, float SmoothTime);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleDifferenceDegrees(FTransform A, FTransform B);
    
    UFUNCTION(BlueprintPure)
    static float EulerLength(const FRotator& Rotator);
    
};

