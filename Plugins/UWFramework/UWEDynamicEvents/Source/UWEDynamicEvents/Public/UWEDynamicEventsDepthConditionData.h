#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UWEDynamicEventsBaseConditionData.h"
#include "UWEDynamicEventsDepthConditionData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UWEDYNAMICEVENTS_API UUWEDynamicEventsDepthConditionData : public UUWEDynamicEventsBaseConditionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FFloatRange DepthRange;
    
public:
    UUWEDynamicEventsDepthConditionData();

};

