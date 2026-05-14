#pragma once
#include "CoreMinimal.h"
#include "UWEDynamicEventsWorldBaseConditionData.h"
#include "UWEDynamicEventsWorldProbabilityConditionData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWEDynamicEventsWorldProbabilityConditionData : public UUWEDynamicEventsWorldBaseConditionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float Chance;
    
public:
    UUWEDynamicEventsWorldProbabilityConditionData();

};

