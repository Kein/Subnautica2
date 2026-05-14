#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayEffectTypes.h"
#include "UWEGameplayCueNotify_BurstEffects.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_SpawnResult.h"
#include "UWEGameplayCueNotify_BurstLatent.generated.h"

class AActor;

UCLASS(NotPlaceable)
class UWEGAMEPLAYCUES_API AUWEGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition DefaultSpawnCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo DefaultPlacementInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_BurstEffects BurstEffects;
    
    UPROPERTY(BlueprintReadOnly)
    FUWEGameplayCueNotify_SpawnResult BurstSpawnResults;
    
public:
    AUWEGameplayCueNotify_BurstLatent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBurst(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults);
    
};

