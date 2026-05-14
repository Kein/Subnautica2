#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWEEventKey.h"
#include "UWESaveObject.h"
#include "UWEScanStep.h"
#include "UWEScannedActorsComponent.generated.h"

class AActor;
class APlayerState;
class UUWESaveHandle;
class UUWEScanData;
class UUWEScannedActorsGameStateComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWESCANNER_API UUWEScannedActorsComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScanProgressMade, UUWEScanData*, ScanData, int32, TotalScanCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorInstanceScanProgressUpdated, AActor*, Actor, float, Amount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorInstanceScannedByPlayer, AActor*, Actor);
    
    UPROPERTY(BlueprintAssignable)
    FOnActorInstanceScanProgressUpdated OnActorInstanceScanProgressUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorInstanceScannedByPlayer OnActorInstanceScannedByPlayer;
    
    UPROPERTY(BlueprintAssignable)
    FOnScanProgressMade OnScanProgressMade;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(Instanced)
    UUWEScannedActorsGameStateComponent* ScannedActorsGameStateComponent;
    
public:
    UUWEScannedActorsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WillUnlockScanDataExtrasIfHasTag(const AActor* Actor, FGameplayTag ExtraUnlocksTag, UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool WillUnlockScanDataExtras(const AActor* Actor, FGameplayTagContainer& ExtraUnlocks, UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool WillEarnScanDataCompletionProgress(AActor* Actor, UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintCallable)
    bool TryAddActorIntanceScanProgress(AActor* Actor, float Amount, float PredictedTotalAmount);
    
private:
    UFUNCTION()
    void OnScannedEventFired(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
    UFUNCTION()
    void OnScanCompletedEventFired(FUWEEventKey EventKey, int32 OldValue, int32 NewValue);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsScanDataTagRequirementMet(const UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsScanDataProgressComplete(UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsScanDataFullyScanned(UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorValidScanTarget(AActor* Actor, UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorScannedByPlayer(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool HasActorEverBeenScannedByAPlayer(AActor* Actor) const;
    
private:
    UFUNCTION()
    void GiveCurrencyPrize(APlayerState* Player, UUWEScanData* ScanData);
    
    UFUNCTION()
    void GiveConsolationPrize(const APlayerState* Player, UUWEScanData* ScanData) const;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FUWEScanStep> GetUnlockedScanDataStepsForActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetScanCountTowardsCompletion(UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    float GetActorInstanceScannedProgressForPlayer(AActor* Actor) const;
    
private:
    UFUNCTION(Client, Reliable)
    void ClientNotifyScannedInstanceCompleted(AActor* ScannedActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanActorCurrentlyBeScanned(AActor* Actor, FGameplayTagContainer& ReasonsCanBeScanned, UUWEScanData* ScanData) const;
    
    UFUNCTION(BlueprintPure)
    bool CanActorBeScannedByBaseScanner(AActor* Actor, FGameplayTagContainer& ReasonsCanBeScanned, UUWEScanData* ScanData) const;
    

    // Fix for true pure virtual functions not being implemented
};

