#pragma once
#include "CoreMinimal.h"
#include "EGPPWidgetInputCondition_ConditionsOperator.h"
#include "GPPWidgetInputCondition.h"
#include "GPPWidgetInputCondition_Conditions.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGPPWidgetInputCondition_Conditions : public UGPPWidgetInputCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EGPPWidgetInputCondition_ConditionsOperator Operator;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UGPPWidgetInputCondition*> Conditions;
    
public:
    UGPPWidgetInputCondition_Conditions();

};

