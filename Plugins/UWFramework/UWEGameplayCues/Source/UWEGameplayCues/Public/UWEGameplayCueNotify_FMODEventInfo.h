#pragma once
#include "CoreMinimal.h"
// FIXME:
// stub
//#include "FMODOcclusionDetails.h"
// real
#include "FMODAudioComponent.h"
#include "UWEEffectParam.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_FMODEventInfo.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_FMODEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_SpawnCondition SpawnConditionOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_PlacementInfo PlacementInfoOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFMODEvent* FMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFMODOcclusionDetails OcclusionDetails;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideSpawnCondition: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverridePlacementInfo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEEffectParam> Params;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_FMODEventInfo();
};

