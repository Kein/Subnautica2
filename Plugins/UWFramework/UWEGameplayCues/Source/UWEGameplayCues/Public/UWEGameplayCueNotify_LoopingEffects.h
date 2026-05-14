#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "UWEGameplayCueNotify_CameraShakeEventInfo.h"
#include "UWEGameplayCueNotify_DecalEventInfo.h"
#include "UWEGameplayCueNotify_DynamicForceFeedbackEventInfo.h"
#include "UWEGameplayCueNotify_FMODEventInfo.h"
#include "UWEGameplayCueNotify_ForceFeedbackEventInfo.h"
#include "UWEGameplayCueNotify_ParticleInfo.h"
#include "UWEGameplayCueNotify_WidgetInfo.h"
#include "UWEGameplayCueNotify_LoopingEffects.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_LoopingEffects { //FIXME: ENGINE CHANGE: : public FGameplayCueNotify_LoopingEffects {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_CameraShakeEventInfo> LoopingCameraShakeEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_ForceFeedbackEventInfo> ForceFeedbackEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_FMODEventInfo> LoopingFMODEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_ParticleInfo> UWELoopingParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_WidgetInfo> LoopingWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_DecalEventInfo> Decals;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_DynamicForceFeedbackEventInfo DynamicForceFeedbackEvent;
    
public:
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_LoopingEffects();
};

