#pragma once
#include "CoreMinimal.h"
#include "GPPWidgetInputExecInfo.h"
#include "GPPWidgetInputExecInfo_ScrollMove.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UGPPWidgetInputExecInfo_ScrollMove : public UGPPWidgetInputExecInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ScrollSpeed;
    
public:
    UGPPWidgetInputExecInfo_ScrollMove();

};

