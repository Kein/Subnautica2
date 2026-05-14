#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "AbilitySystemComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "UWESaveObject.h"
#include "ActivePredictedEffect.h"
#include "Templates/SubclassOf.h"
#include "UWEAbilitySystemComponentSaveData.h"
#include "UWEAbilitySystemComponent.generated.h"

class AActor;
class UEnhancedInputComponent;
class UGameplayEffect;
class UGameplayTask;
class UUWEAbilitySet;
class UUWEAbilitySystemComponent;
class UUWESaveHandle;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWEABILITYSYSTEM_API UUWEAbilitySystemComponent : public UAbilitySystemComponent, public IUWESaveObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUWEAbilityDelegate, const UUWEAbilitySystemComponent*, ASC, const FGameplayAbilitySpecHandle&, AbilitySpecHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInputComponentChangedDelegate, UEnhancedInputComponent*, OldInputComponent, UEnhancedInputComponent*, NewInputComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAbilityAnimNotifyDelegate, FName, NotifyName);
    
    UPROPERTY(Export)
    TWeakObjectPtr<UEnhancedInputComponent> InputComponent;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityAnimNotifyDelegate OnAbilityAnimNotify;
    
    UPROPERTY(BlueprintAssignable)
    FUWEAbilityDelegate OnAbilityGiven;
    
    UPROPERTY(BlueprintAssignable)
    FUWEAbilityDelegate OnAbilityRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHandlingGameplayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShouldAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReplicateAttributes;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UUWEAbilitySet> AbilitySet;
    
    UPROPERTY()
    UUWESaveHandle* SaveHandle;
    
    UPROPERTY(SaveGame)
    FUWEAbilitySystemComponentSaveData SaveData;
    
    UPROPERTY()
    TArray<FActivePredictedEffect> ActivePredictedEffects;
    
    UPROPERTY(SaveGame)
    FGameplayTagContainer PersistentTags;
    
    UPROPERTY(ReplicatedUsing=OnRep_AbilityTags)
    FGameplayTagContainer AbilityTags;
    
public:
    UUWEAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle UWEApplyDamageOverTime(float Damage, float Period, float duration, FGameplayTag DamageType, AActor* DamageReceiver, FHitResult HitResult, FGameplayTagContainer ContextTags);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle UWEApplyDamage(float Damage, FGameplayTag DamageType, AActor* DamageReceiver, FHitResult HitResult, FGameplayTagContainer ContextTags);
    
    UFUNCTION(BlueprintCallable)
    void UWEApplyAOEDamage(float Damage, FGameplayTag DamageType, FVector Location, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, const FName& ObstacleCheckProfileName, float Radius, bool bIncludeSelf, bool bDoLOSCheck, FGameplayTagContainer ContextTags);
    
protected:
    UFUNCTION()
    void TagResponseEvent(const FGameplayTag Tag, int32 NewCount, int32 idx);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPersistentGameplayTag(const FGameplayTag& Tag, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    bool SetGameplayEffectDurationHandle(FActiveGameplayEffectHandle Handle, float NewDuration);
    
    UFUNCTION(Reliable, Server)
    void ServerRestartActiveAbilities();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicTagGameplayEffect(const FGameplayTag& Tag);
    
protected:
    UFUNCTION()
    void OnRep_AbilityTags(const FGameplayTagContainer& OldTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void InvalidateClientPredictionKey();
    
protected:
    UFUNCTION()
    AActor* GetTargetActor();
    
public:
    UFUNCTION(BlueprintPure)
    UGameplayTask* GetSimulatedTask(TSubclassOf<UGameplayTask> TaskClass);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLooseGameplayTagCount(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveLooseGameplayTag(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle BP_ApplyUniqueGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddLooseGameplayTag(FGameplayTag Tag, int32 Count);
    
    UFUNCTION(BlueprintPure)
    bool AllAbilitySetAbilitiesGranted() const;
    
    UFUNCTION(BlueprintCallable)
    void AddUniqueDynamicTagGameplayEffect(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle AddReplicatedGameplayTagForDuration(const FGameplayTag& Tag, float duration, bool bPredict);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayCueLocal(const FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle AddDynamicTagGameplayEffect(const FGameplayTag& Tag);
    

    // Fix for true pure virtual functions not being implemented
};

