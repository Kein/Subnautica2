#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_DynamicForceFeedbackEventInfo.generated.h"

class UUWEDynamicForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_DynamicForceFeedbackEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUWEDynamicForceFeedbackEffect> DynamicForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Multiplier;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_DynamicForceFeedbackEventInfo();
};

