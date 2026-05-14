#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEPrimaryDataAssetBase.h"
#include "UWEDynamicEventDataAsset.generated.h"

class UUWEBaseDynamicEvent;
class UUWEDynamicEventsBaseConditionData;
class UUWEDynamicEventsWorldBaseConditionData;

UCLASS()
class UWEDYNAMICEVENTS_API UUWEDynamicEventDataAsset : public UUWEPrimaryDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag EventTag;
    
    UPROPERTY(EditDefaultsOnly)
    FText EventDescription;
    
    UPROPERTY(EditDefaultsOnly)
    bool Active;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsDevelopmentOnly;
    
    UPROPERTY(EditDefaultsOnly)
    FString FeatureFlag;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxActivations;
    
    UPROPERTY(EditDefaultsOnly)
    float Cooldown;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EvaluationIntervalBase;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EvaluationIntervalDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    bool OneOff;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEDynamicEventsWorldBaseConditionData*> WorldConditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEDynamicEventsBaseConditionData*> AllPlayerConditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TArray<UUWEDynamicEventsBaseConditionData*> EachPlayerConditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UUWEBaseDynamicEvent* EventType;
    
    UUWEDynamicEventDataAsset();

};

