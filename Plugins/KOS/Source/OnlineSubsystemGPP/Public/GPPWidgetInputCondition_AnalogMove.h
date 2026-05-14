#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GPPWidgetInputCondition.h"
#include "GPPWidgetInputCondition_AnalogMove.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGPPWidgetInputCondition_AnalogMove : public UGPPWidgetInputCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
public:
    UGPPWidgetInputCondition_AnalogMove();

};

