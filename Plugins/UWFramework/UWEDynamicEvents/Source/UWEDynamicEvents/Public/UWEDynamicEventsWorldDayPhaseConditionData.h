#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "UWEDynamicEventsWorldBaseConditionData.h"
#include "UWEDynamicEventsWorldDayPhaseConditionData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWEDynamicEventsWorldDayPhaseConditionData : public UUWEDynamicEventsWorldBaseConditionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EDayPhase DayPhase;
    
public:
    UUWEDynamicEventsWorldDayPhaseConditionData();

};

