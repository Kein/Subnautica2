#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "GPPWidgetInputCondition.h"
#include "GPPWidgetInputCondition_NavigationAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGPPWidgetInputCondition_NavigationAction : public UGPPWidgetInputCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUINavigationAction UINavigationAction;
    
public:
    UGPPWidgetInputCondition_NavigationAction();

};

