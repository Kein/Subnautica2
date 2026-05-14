#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayEffectTypes.h"
#include "UWEGameplayCueNotify_BurstEffects.h"
#include "UWEGameplayCueNotify_LoopingEffects.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_SpawnResult.h"
#include "UWEGameplayCueNotify_Looping.generated.h"

class AActor;

UCLASS(NotPlaceable)
class UWEGAMEPLAYCUES_API AUWEGameplayCueNotify_Looping : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition DefaultSpawnCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo DefaultPlacementInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_BurstEffects ApplicationEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayCueNotify_SpawnResult ApplicationSpawnResults;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_LoopingEffects LoopingEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayCueNotify_SpawnResult LoopingSpawnResults;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_BurstEffects RecurringEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayCueNotify_SpawnResult RecurringSpawnResults;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_BurstEffects RemovalEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayCueNotify_SpawnResult RemovalSpawnResults;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentTarget;
    
public:
    AUWEGameplayCueNotify_Looping(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoval(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRecurring(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoopingStart(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplication(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults);
    
};

