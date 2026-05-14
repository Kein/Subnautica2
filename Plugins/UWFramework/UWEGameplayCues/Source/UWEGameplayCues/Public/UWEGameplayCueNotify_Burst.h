#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayEffectTypes.h"
#include "UWEGameplayCueNotify_BurstEffects.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_SpawnResult.h"
#include "UWEGameplayCueNotify_Burst.generated.h"

class AActor;

UCLASS()
class UWEGAMEPLAYCUES_API UUWEGameplayCueNotify_Burst : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition DefaultSpawnCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo DefaultPlacementInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_BurstEffects BurstEffects;
    
public:
    UUWEGameplayCueNotify_Burst();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBurst(AActor* Target, const FGameplayCueParameters& Parameters, const FUWEGameplayCueNotify_SpawnResult& SpawnResults) const;
    
};

