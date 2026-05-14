#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "GPPBaseScreen.h"
#include "GPPPurchaseLimitButtonItemWidget.generated.h"

class UGPPMenuBtnWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPurchaseLimitButtonItemWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Select;
    
public:
    UGPPPurchaseLimitButtonItemWidget();

private:
    UFUNCTION()
    void OnClickBtnSelect(bool bInSelected);
    
};

