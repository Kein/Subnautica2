#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SN2PowerPlantControlRoomUpper.generated.h"

class UUWEStoryGoal;

UCLASS()
class SUBNAUTICA2_API ASN2PowerPlantControlRoomUpper : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurbineFixed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPowerPlantPowered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLowerNeedleConnected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConsoleActivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCodeActivated, const AActor*, TriggerActor, bool, ActivationSuccess);
    
    UPROPERTY(BlueprintAssignable)
    FOnLowerNeedleConnected OnLowerNeedleConnected;
    
    UPROPERTY(BlueprintAssignable)
    FOnConsoleActivated OnConsoleActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerPlantPowered OnPowerPlantPowered;
    
    UPROPERTY(BlueprintAssignable)
    FOnCodeActivated OnCodeActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnTurbineFixed OnTurbineFixed;
    
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> NeedleLaunchedSuccessfullyStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> ConsoleActiveStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> CodeActivatedStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> TurbineFixedStoryGoal;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> PowerPlantPoweredStoryGoal;
    
public:
    ASN2PowerPlantControlRoomUpper(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUnlockedStoryGoal(UUWEStoryGoal* UnlockedStoryGoal, AActor* ReceivingActor);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateCode(const AActor* TriggerActor);
    
    UFUNCTION(BlueprintPure)
    bool IsTurbineFixed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLowerNeedleConnected() const;
    
    UFUNCTION(BlueprintPure)
    bool IsConsoleActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivateCode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCode_BP(bool Success);
    
};

