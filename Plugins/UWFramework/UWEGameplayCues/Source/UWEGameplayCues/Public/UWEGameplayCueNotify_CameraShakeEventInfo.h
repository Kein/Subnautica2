#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_CameraShakeEventInfo.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_CameraShakeEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo PlacementInfoOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InnerAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OuterAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverridePlacementInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bConvertToForceFeedback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ForceFeedbackIntensity;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_CameraShakeEventInfo();
};

