#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EVolumeType.h"
#include "UWEHabitationArea.h"
#include "UWEAILocomotionComponent.generated.h"

class AUWEAIController;
class USplineComponent;
class UUWEAIMovementComponentGlobalSettings;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEAI_API UUWEAILocomotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AUWEAIController* AIOwner;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FVector StartLocation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FRotator StartRotation;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameplayTag CurrentHabitationAreaTag;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGameplayTag, FUWEHabitationArea> HabitationAreas;
    
    UPROPERTY()
    UUWEAIMovementComponentGlobalSettings* GlobalSettings;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EVolumeType CurrentVolumeType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGameplayTag CurrentEnvironmentType;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USplineComponent> PatrolSplineComponent;
    
public:
    UUWEAILocomotionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SwitchHabitationArea(const FGameplayTag& HabitationAreaTag);
    
    UFUNCTION(BlueprintCallable)
    void Shutdown(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void Restart();
    
protected:
    UFUNCTION()
    void OnCurrentVolumeChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInsideHabitationArea(const FGameplayTag& HabitationAreaTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsideCurrentHabitationArea();
    
    UFUNCTION(BlueprintPure)
    bool HasHabitationArea(const FGameplayTag& HabitationAreaTag) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetStartRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetStartLocation() const;
    
    UFUNCTION(BlueprintCallable)
    USplineComponent* GetPatrolSplineComponent();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCurrentHabitationAreaTag() const;
    
    UFUNCTION(BlueprintPure)
    FUWEHabitationArea GetCurrentHabitationArea() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointToHabitationArea(const FGameplayTag& HabitationAreaTag, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestPointToCurrentHabitationArea(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestCenterOfHabitationArea(const FGameplayTag& HabitationAreaTag, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetClosestCenterOfCurrentHabitationArea(const FVector& Location);
    
};

