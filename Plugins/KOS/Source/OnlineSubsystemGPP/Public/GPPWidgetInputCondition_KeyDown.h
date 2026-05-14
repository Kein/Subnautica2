#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GPPWidgetInputCondition.h"
#include "GPPWidgetInputCondition_KeyDown.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGPPWidgetInputCondition_KeyDown : public UGPPWidgetInputCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
public:
    UGPPWidgetInputCondition_KeyDown();

};

