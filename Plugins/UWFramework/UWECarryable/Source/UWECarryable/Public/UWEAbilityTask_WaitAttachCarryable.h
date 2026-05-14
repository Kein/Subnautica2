#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "UWECarryableAttachmentInfo.h"
#include "UWEAbilityTask_WaitAttachCarryable.generated.h"

class AActor;
class UGameplayAbility;
class USceneComponent;
class UUWEAbilityTask_WaitAttachCarryable;

UCLASS()
class UWECARRYABLE_API UUWEAbilityTask_WaitAttachCarryable : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUWECarrytaskCancelled);
    
    UPROPERTY(BlueprintAssignable)
    FUWECarrytaskCancelled OnCancelled;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AttachmentInfo)
    FUWECarryableAttachmentInfo AttachmentInfo;
    
    UPROPERTY(BlueprintReadOnly)
    double TimeAttached;
    
    UPROPERTY(BlueprintReadOnly)
    double TransitionAmount;
    
public:
    UUWEAbilityTask_WaitAttachCarryable();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UUWEAbilityTask_WaitAttachCarryable* WaitAttachCarryable(UGameplayAbility* OwningAbility, AActor* InCarryableActor, USceneComponent* InParentComponent, FName InSocket, FName TaskInstanceName, bool UseTransition);
    
private:
    UFUNCTION()
    void OnRep_AttachmentInfo();
    
    UFUNCTION()
    void OnDied(AActor* SourceActor, AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetCarryableActor() const;
    
};

