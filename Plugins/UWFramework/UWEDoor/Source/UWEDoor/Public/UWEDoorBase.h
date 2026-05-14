#pragma once
#include "CoreMinimal.h"
#include "UWEGameplayActor.h"
#include "UWESaveObject.h"
#include "UWEDoorBase.generated.h"

class AActor;
class APawn;
class UCurveFloat;
class UFMODEvent;
class UUWEGenericLockComponent;
class UUWESaveComponent;
class UUWESaveHandle;
class UUWEStoryGoal;

UCLASS()
class UWEDOOR_API AUWEDoorBase : public AUWEGameplayActor, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOpenDelegate, bool, IsOpen);
    
    UPROPERTY(BlueprintAssignable)
    FOpenDelegate OnOpenChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsOpen)
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    bool bWantsToOpen;
    
    UPROPERTY(EditAnywhere)
    bool bWaitForAnimation;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* OpenCurve;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> OpenSound;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFMODEvent> CloseSound;
    
    UPROPERTY(EditAnywhere)
    float OpenSpeed;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoalToOpen;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UUWEStoryGoal> StoryGoalToClose;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWESaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UUWEGenericLockComponent* LockComponent;
    
private:
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    AUWEDoorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnlockAndOpen(APawn* TriggeringActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unlock(APawn* TriggeringActor);
    
    UFUNCTION(BlueprintCallable)
    void ToggleOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Open();
    
private:
    UFUNCTION()
    void OnStoryGoalUnlocked(UUWEStoryGoal* lockedStoryGoal, AActor* ReceivingActor);
    
    UFUNCTION()
    void OnRep_IsOpen();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpenedFractionChanged(float Fraction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lock();
    
    UFUNCTION(BlueprintCallable)
    void CloseAndLock();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void CanUnlock(bool& Result, APawn* TriggeringActor);
    

    // Fix for true pure virtual functions not being implemented
};

