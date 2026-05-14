#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EUWELerpMovementState.h"
#include "UWELerpMovementExecutionSettings.h"
#include "UWELerpMovementPoint.h"
#include "UWELerpMovementComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEMOVEMENT_API UUWELerpMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLerpStopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLerpStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLerpReverseDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLerpCompleteDelegate);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool UpdateComponentVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool AuthorityOnly;
    
    UPROPERTY(VisibleInstanceOnly)
    EUWELerpMovementState State;
    
    UPROPERTY(VisibleInstanceOnly)
    FUWELerpMovementExecutionSettings ExecutionSettings;
    
    UPROPERTY(VisibleInstanceOnly)
    float TimePassed;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 CurrentLoopsCount;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnLerpStartDelegate OnLerpStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnLerpStopDelegate OnLerpStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnLerpCompleteDelegate OnLerpComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnLerpReverseDelegate OnLerpReverse;
    
    UUWELerpMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLerpData(TArray<FUWELerpMovementPoint> Points, const FUWELerpMovementExecutionSettings& InExecutionSettings);
    
    UFUNCTION(BlueprintCallable)
    void ResetLerpData();
    
    UFUNCTION(BlueprintCallable)
    void LerpToTransform(const FTransform& StopTransform, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpToRotation(const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpToLocationAndRotation(const FVector& StopLocation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpToLocation(const FVector& StopLocation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpStop(bool Reset);
    
    UFUNCTION(BlueprintCallable)
    void LerpStart();
    
    UFUNCTION(BlueprintCallable)
    void LerpBetweenTransforms(const FTransform& StartTransform, const FTransform& StopTransform, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpBetweenRotations(const FRotator& StartRotation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpBetweenLocationsAndRotations(const FVector& StartLocation, const FRotator& StartRotation, const FVector& StopLocation, const FRotator& StopRotation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
    UFUNCTION(BlueprintCallable)
    void LerpBetweenLocations(const FVector& StartLocation, const FVector& StopLocation, const FUWELerpMovementExecutionSettings& InExecutionSettings, bool StartImmediately);
    
};

