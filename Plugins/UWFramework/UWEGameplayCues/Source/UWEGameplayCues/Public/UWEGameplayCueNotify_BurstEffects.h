#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "UWEGameplayCueNotify_CameraShakeEventInfo.h"
#include "UWEGameplayCueNotify_DecalEventInfo.h"
#include "UWEGameplayCueNotify_FMODEventInfo.h"
#include "UWEGameplayCueNotify_ForceFeedbackEventInfo.h"
#include "UWEGameplayCueNotify_NotifyInfo.h"
#include "UWEGameplayCueNotify_ParticleInfo.h"
#include "UWEGameplayCueNotify_WidgetInfo.h"
#include "UWEGameplayCueNotify_BurstEffects.generated.h"

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_BurstEffects {//FIXME: ENGINE CHANGE: public FGameplayCueNotify_BurstEffects {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_CameraShakeEventInfo> BurstCameraShakeEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_ForceFeedbackEventInfo> ForceFeedbackEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_FMODEventInfo> BurstFMODEvents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_ParticleInfo> UWEBurstParticles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_WidgetInfo> BurstWidgets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxWidgetLifetime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FUWEGameplayCueNotify_NotifyInfo BurstNotify;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FUWEGameplayCueNotify_DecalEventInfo> Decals;
    
public:
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_BurstEffects();
};

