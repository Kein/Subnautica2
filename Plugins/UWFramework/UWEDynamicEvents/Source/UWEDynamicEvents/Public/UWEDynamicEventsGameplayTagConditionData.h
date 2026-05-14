#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UWEDynamicEventsBaseConditionData.h"
#include "UWEDynamicEventsGameplayTagConditionData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWEDynamicEventsGameplayTagConditionData : public UUWEDynamicEventsBaseConditionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagQuery GameplayTagQuery;
    
public:
    UUWEDynamicEventsGameplayTagConditionData();

};

