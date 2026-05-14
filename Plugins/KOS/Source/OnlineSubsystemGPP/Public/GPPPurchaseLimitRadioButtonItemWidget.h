#pragma once
#include "CoreMinimal.h"
#include "GPPBaseScreen.h"
#include "GPPPurchaseLimitRadioButtonItemWidget.generated.h"

class UGPPMenuBtnWidget;

UCLASS(EditInlineNew)
class ONLINESUBSYSTEMGPP_API UGPPPurchaseLimitRadioButtonItemWidget : public UGPPBaseScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UGPPMenuBtnWidget* Btn_Select;
    
public:
    UGPPPurchaseLimitRadioButtonItemWidget();

private:
    UFUNCTION()
    void OnClickBtnSelect(bool bInSelected);
    
};

