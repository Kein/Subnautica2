#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_NotifyInfo.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_NotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo PlacementInfoOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag Severity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText Message;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverridePlacementInfo: 1;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_NotifyInfo();
};

