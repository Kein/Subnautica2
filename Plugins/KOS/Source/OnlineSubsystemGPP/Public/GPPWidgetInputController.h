#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GPPWidgetInputConditionExec.h"
#include "GPPWidgetInputController.generated.h"

UCLASS()
class UGPPWidgetInputController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGPPWidgetInputConditionExec> ConditionExecList;
    
public:
    UGPPWidgetInputController();

};

