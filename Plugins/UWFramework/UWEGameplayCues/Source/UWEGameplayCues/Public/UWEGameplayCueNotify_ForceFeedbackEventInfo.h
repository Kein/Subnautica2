#pragma once
#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "EUWEForceFeedbackCurve.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_ForceFeedbackEventInfo.generated.h"

class UForceFeedbackAttenuation;
class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_ForceFeedbackEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo PlacementInfoOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverridePlacementInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bIsLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EUWEForceFeedbackCurve CurveType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float duration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAffectsLeftSmall;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAffectsLeftLarge;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAffectsRightSmall;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bAffectsRightLarge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WorldIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackAttenuation* WorldAttenuation;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_ForceFeedbackEventInfo();
};

