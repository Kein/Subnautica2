#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDynamicEventGroup.generated.h"

class UUWEBaseDynamicEvent;
class UUWEDynamicEventDataAsset;

USTRUCT(BlueprintType)
struct UWEDYNAMICEVENTS_API FUWEDynamicEventGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPrimaryAssetId AssetId;
    
    UPROPERTY(BlueprintReadOnly)
    UUWEDynamicEventDataAsset* EventDataAsset;
    
    UPROPERTY(BlueprintReadOnly)
    float Cooldown;
    
    UPROPERTY(BlueprintReadOnly)
    float EvaluationInterval;
    
    UPROPERTY(BlueprintReadOnly)
    bool Active;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsDevelopmentOnly;
    
    UPROPERTY(BlueprintReadOnly)
    FString FeatureFlag;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UUWEBaseDynamicEvent*> ActiveInstances;
    
    FUWEDynamicEventGroup();
};

