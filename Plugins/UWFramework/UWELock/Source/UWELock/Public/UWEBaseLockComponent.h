#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UWESaveObject.h"
#include "EUWELockState.h"
#include "UWELockFailedReason.h"
#include "UWEBaseLockComponent.generated.h"

class APawn;
class UUWEDialogueStoryEvent;
class UUWESaveHandle;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWELOCK_API UUWEBaseLockComponent : public UActorComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockDelegate, bool, IsLocked);
    
    UPROPERTY(BlueprintAssignable)
    FLockDelegate OnLockChanged;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_WasLoaded)
    bool WasLoaded;
    
    UPROPERTY(EditInstanceOnly, SaveGame, ReplicatedUsing=OnRep_LockState)
    EUWELockState LockState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEDialogueStoryEvent* UnlockedDialogue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUWEDialogueStoryEvent* UnlockFailedDialogue;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
public:
    UUWEBaseLockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool TryUnlock(APawn* ForPlayer);
    
protected:
    UFUNCTION()
    void OnRep_WasLoaded();
    
    UFUNCTION()
    void OnRep_LockState();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUnlock(FUWELockFailedReason& Reason, APawn* ForPlayer) const;
    

    // Fix for true pure virtual functions not being implemented
};

