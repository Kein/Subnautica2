#pragma once
#include "CoreMinimal.h"
#include "UWEEffectParam.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_ParticleInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_ParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo PlacementInfoOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverridePlacementInfo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bCastShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEEffectParam> Params;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bForceEndEmitters: 1;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_ParticleInfo();
};

