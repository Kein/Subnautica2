#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEGameplayCueNotify_PlacementInfo.h"
#include "UWEGameplayCueNotify_SpawnCondition.h"
#include "UWEGameplayCueNotify_DecalEventInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FUWEGameplayCueNotify_DecalEventInfo {
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
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector DecalSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bOverrideFadeOut: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FadeOutStartDelay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FadeOutDuration;
    
    UWEGAMEPLAYCUES_API FUWEGameplayCueNotify_DecalEventInfo();
};

