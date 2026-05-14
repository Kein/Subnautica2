#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AbilityInfoData.h"
#include "EUWEAbilityActivationGroup.h"
#include "EUWEAbilityActivationPolicy.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilityInputPrompt.h"
#include "UWEAnimationEventParams.h"
#include "UWEGameplayEventParams.h"
#include "UWETargetActor.h"
#include "UWEGameplayAbility.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayEffect;
class UGameplayTask;
class UInputAction;
class UPrimitiveComponent;
class UUWEAbilityCondition;
class UUWEAbilitySystemComponent;
class UUWEBaseGameplayEventData;

UCLASS(Config=Game)
class UWEABILITYSYSTEM_API UUWEGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTasksEnded);
    
    UPROPERTY(BlueprintAssignable)
    FTasksEnded OnTaskDeactivated;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bRestartOnPossess;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanEverShowInputPrompt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float GenericCost;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float GenericCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bWaitAbilityEndWhenUnequipping;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer GrantedTags;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAbilityInfoData AbilityInfoData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEAbilityActivationPolicy ActivationPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EUWEAbilityActivationGroup ActivationGroup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Priority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInputPromptOnlyWhenActivatable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEAbilityCondition*> ActivationConditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEAbilityInputPrompt> InputPrompts;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGameplayEffect>> AttachedEffects;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanBeSaved;
    
private:
    UPROPERTY()
    bool bUWEIsAbilityEnding;
    
    UPROPERTY(Instanced)
    UUWEBaseGameplayEventData* OptionalGameplayEventData;
    
public:
    UUWEGameplayAbility();

    UFUNCTION(BlueprintCallable)
    void UWERemoveGameplayCueFromTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintCallable)
    void UWERemoveGameplayCue(FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectSpecHandle UWEMakeOutgoingGameplayEffectSpecForDamage(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, float Damage, FGameplayTag DamageType, FHitResult HitResult) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayEffectSpecHandle UWEMakeOutgoingGameplayEffectSpec(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 Level, int32 Stacks) const;
    
    UFUNCTION(BlueprintCallable)
    void UWEExecuteGameplayCueWithParamsOnTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void UWEExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void UWEEndAbility();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool UWECommitCost(bool BroadcastCommitEvent);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool UWECheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void UWECancelAbility();
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle UWEApplyGameplayEffectToTarget(UAbilitySystemComponent* TargetASC, TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 GameplayEffectLevel, int32 Stacks, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle UWEApplyGameplayEffectToOwner(TSubclassOf<UGameplayEffect> GameplayEffectClass, AActor* EffectCauser, int32 GameplayEffectLevel, int32 Stacks, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    void UWEApplyCooldown();
    
    UFUNCTION(BlueprintCallable)
    void UWEAddGameplayCueWithParamsToTarget(UAbilitySystemComponent* TargetASC, FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    void UWEAddGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetData(FGameplayAbilityTargetDataHandle TargetDataHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedGameplayEffects();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAbilityTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintPure)
    bool IsInputPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActiveTasks(UGameplayTask* IgnoreTask, FName FilterName) const;
    
    UFUNCTION(BlueprintPure)
    UUWEAbilitySystemComponent* GetUWEAbilitySystemComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    FUWETargetActor GetHoverInfoFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetHoverComponentFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHoverActorFromActorInfo() const;
    
    UFUNCTION(BlueprintPure)
    FUWEGameplayEventParams GetGameplayEventData() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetCosmeticTagsFromActorInfo() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetAttributeValue(FGameplayAttribute Attribute, bool& bFound) const;
    
public:
    UFUNCTION(BlueprintPure)
    FUWEAnimationEventParams GetAnimationEventData() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GetActivateOnSpawn() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FAbilityInfoData GetActivateAbilityInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRemoveGameplayCue(FGameplayTag GameplayCueTag);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeActivationGroup(EUWEAbilityActivationGroup NewGroup);
    
    UFUNCTION(BlueprintPure)
    bool CanChangeActivationGroup(EUWEAbilityActivationGroup NewGroup) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FActiveGameplayEffectHandle> BP_ApplyPredictedGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
    
    UFUNCTION(BlueprintCallable)
    void AttachEffect(FActiveGameplayEffectHandle ActiveHandle, UAbilitySystemComponent* TargetASC, int32 Stacks);
    
};

