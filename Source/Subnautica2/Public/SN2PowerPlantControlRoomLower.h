#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SN2PowerPlantControlRoomLower.generated.h"

class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2PowerPlantControlRoomLower : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNeedleLaunched, bool, LaunchSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeedleCompleted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNeedleBlockageRemoved);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConsoleActivated);
    
    UPROPERTY(BlueprintAssignable)
    FOnNeedleLaunched OnNeedleLaunched;
    
    UPROPERTY(BlueprintAssignable)
    FOnNeedleBlockageRemoved OnNeedleBlockageRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnConsoleActivated OnConsoleActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnNeedleCompleted OnNeedleCompleted;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> NeedleLaunchedSuccessfullyStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> BlightClearedStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> UpperControlTowerCompleteStorygoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> ConsoleActiveStoryGoal;
    
public:
    ASN2PowerPlantControlRoomLower(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLaunchNeedle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LaunchNeedle_BP(bool Success);
    
    UFUNCTION(BlueprintPure)
    bool IsUpperControlTowerComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConsoleActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLaunchNeedle() const;
    
};

