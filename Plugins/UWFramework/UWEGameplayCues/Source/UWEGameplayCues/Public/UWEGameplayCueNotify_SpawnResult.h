#pragma once
#include "CoreMinimal.h"
// FIXME
// stub
//#include "FMODEventInstance.h"
// real
#include "FMODBlueprintStatics.h"
#include "GameplayCueNotifyTypes.h"
#include "UWEGameplayCueNotify_SpawnResult.generated.h"

class UCameraShakeSourceComponent;
class UDecalComponent;
class UFMODAudioComponent;
class UFXSystemComponent;
class UForceFeedbackComponent;
class UUWEDynamicForceFeedbackEffect;
class UUserWidget;
class UWidgetComponent;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_SpawnResult { //FIXME: ENGINE CHANGE: : public FGameplayCueNotify_SpawnResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UFMODAudioComponent*> FMODAudioComponents;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UCameraShakeSourceComponent*> CameraShakeComponents;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UForceFeedbackComponent*> ForceFeedbackComponents;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UUWEDynamicForceFeedbackEffect* DynamicForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FFMODEventInstance> FMODEventInstances;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UFXSystemComponent*> UWEFxSystemComponents;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<bool> ForceEndEmitters;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UUserWidget*> Widgets;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UWidgetComponent*> WidgetComponents;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UDecalComponent*> DecalComponents;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_SpawnResult();
};

