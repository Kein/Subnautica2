#pragma once
#include "CoreMinimal.h"
#include "UWECharacterMovementComponentBase.h"
#include "UWECharacterMovementComponent.generated.h"

class IUWECharacterMovementBase;
class UUWECharacterMovementBase;
class UCapsuleComponent;
class UWECharacterMovementComponent;

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnStep, UWECharacterMovementComponent, OnStepDelegate, float, StepAmount);

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWECharacterMovementComponent : public UUWECharacterMovementComponentBase {
    GENERATED_BODY()
public:
    
protected:
    UPROPERTY()
    TScriptInterface<IUWECharacterMovementBase> CurrentCharacterMovementBase;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnStep OnStepDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSwimAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFlyAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightChangeTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuoyancyForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceUpwardsFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PushImpactedObjectAlongFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableStuckDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UnstuckLocationHistoryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceBetweenUnstuckLocations;
    
    UPROPERTY(Instanced)
    UCapsuleComponent* CapsuleComponent;
    
    UUWECharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    float GetDistanceToWaterline() const;
    
    UFUNCTION(BlueprintPure)
    float GetDepth() const;
    
};

